#include "stdafx.h"
#include "addressbook.h"
#include "adddialog.h"


AddressBook::AddressBook(QWidget *parent)
	: QWidget(parent)
{
	setupUi();
	connectUi();
} // AddressBook



void AddressBook::setupUi()
{
	this->setFixedSize(500, 400);

	QGridLayout* mainLayout = new QGridLayout(this);
	mainLayout->setSpacing(6);
	mainLayout->setContentsMargins(11, 11, 11, 11);

	{
		addressList = new QListWidget(this);
		nameLabel = new QLabel(this);
		emailLabel = new QLabel(this);

		mainLayout->addWidget(addressList, 0, 0, 1, 2);
		mainLayout->addWidget(nameLabel, 1, 0, 1, 1);
		mainLayout->addWidget(emailLabel, 1, 1, 1, 2);
	}

	{
		QGridLayout* buttonLayout = new QGridLayout();
		buttonLayout->setSpacing(7);
		mainLayout->addLayout(buttonLayout, 0, 2, 5, 1);

		addButton = new QPushButton(tr("&Add"));
		buttonLayout->addWidget(addButton, 0, 0, 1, 1);

		deleteButton = new QPushButton(tr("&Delete"));
		buttonLayout->addWidget(deleteButton, 1, 0, 1, 1);

		loginGuiButton = new QPushButton(tr("&Go to Login Gui"));
		buttonLayout->addWidget(loginGuiButton, 2, 0, 1, 1);

		optionGuiButton = new QPushButton(tr("&Go to Option Gui"));
		buttonLayout->addWidget(optionGuiButton, 3, 0, 1, 1);

		
		optionGui1Button = new QPushButton(tr("&Go to Option1 Gui"));
		buttonLayout->addWidget(optionGui1Button, 4, 0, 1, 1);


		QSpacerItem* verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
		buttonLayout->addItem(verticalSpacer, 5, 0, 1, 1);
	}

}

void AddressBook::connectUi()
{
	connect(addButton, SIGNAL(clicked()), this, SLOT(on_addButton_clicked()));
	connect(deleteButton, SIGNAL(clicked()), this, SLOT(on_deleteButton_clicked()));
	
	connect(loginGuiButton, SIGNAL(clicked()), this, SLOT(gotoLoginGui()));
	connect(optionGuiButton, SIGNAL(clicked()), this, SLOT(gotoOptionGui()));
	
	connect(addressList, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)), this, SLOT(on_addressList_currentItemChanged()));


}


void AddressBook::on_addressList_currentItemChanged()
{
	QListWidgetItem *curItem = addressList->currentItem();

	if (curItem) {
		nameLabel->setText("Name: " + curItem->text());
		emailLabel->setText("Email: " + curItem->data(Qt::UserRole).toString());
	}
	else {
		nameLabel->setText("<No item selected>");
		emailLabel->clear();
	}
} // on_addressList_currentItemChanged

void AddressBook::on_addButton_clicked() {
	AddDialog dialog(this);
	if (dialog.exec()) {
		QString name = dialog.nameEdit->text();
		QString email = dialog.emailEdit->text();

		if (!name.isEmpty() && !email.isEmpty()) {
			QListWidgetItem *item = new QListWidgetItem(name, addressList);
			item->setData(Qt::UserRole, email);
			addressList->setCurrentItem(item);
		}
	}
} //on_addButton_clicked


void AddressBook::on_deleteButton_clicked() {
	QListWidgetItem *curItem = addressList->currentItem();

	if (curItem) {
		int row = addressList->row(curItem);
		addressList->takeItem(row);
		delete curItem;

		if (addressList->count() > 0)
			addressList->setCurrentRow(0);
		else
			on_addressList_currentItemChanged();
	}
} // on_deleteButton_clicked

void AddressBook::gotoLoginGui()
{
	if (mLoginGui != NULL) {
		this->hide();
		mLoginGui->show();
	}

}

void AddressBook::gotoOptionGui()
{
	if (mOptionGui != NULL) {
		this->hide();
		mOptionGui->show();
	}
}
void AddressBook::connectLoginGui(QWidget * loginGui)
{
	if (mLoginGui == NULL) {
		mLoginGui = loginGui;
	}
}

void AddressBook::connectOptionGui(QWidget * optionGui)
{
	if (mOptionGui == NULL) {
		mOptionGui = optionGui;
	}
}
