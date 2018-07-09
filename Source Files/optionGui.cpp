#include "stdafx.h"
#include "optionGui.h"

optionGui::optionGui(QWidget *parent)
	: QWidget(parent)
{
	setupUi();
	connectUi();
}

void optionGui::setupUi()
{

	tempButton = new QPushButton(tr("&Sign In"));
	//tempButton->show();


	QGridLayout *mainLayout = new QGridLayout;

	mainLayout->addWidget(tempButton, 0, 0, 1, 1, Qt::AlignCenter);

	setLayout(mainLayout);
	setWindowTitle(tr("optionGui"));
	setFixedSize(400, 300);
}

void optionGui::connectUi()
{
	connect(tempButton, SIGNAL(clicked()), this, SLOT(temp1()));
}

void optionGui::connectAddressBook(QWidget* addressBook)
{
	if (mAddressBook == NULL) {
		mAddressBook = addressBook;
	}
}


void optionGui::temp1()
{
	if (mAddressBook != NULL) {
		this->hide();
		mAddressBook->show();
	}
}
