#include "stdafx.h"
#include "loginGui.h"

loginGui::loginGui(QWidget *parent) 
	: QWidget(parent)
{
	setupUi();
	connectUi();
}

void loginGui::setupUi()
{

	QLabel *emailLabel = new QLabel(tr("Email:"));
	emailEdit = new QLineEdit;

	QLabel *passwordLabel = new QLabel(tr("Password:"));
	passwordEdit = new QLineEdit;

	signinButton = new QPushButton(tr("&Sign In"));
	signinButton->show();
	signupButton = new QPushButton(tr("&Sign Up"));
	signupButton->show();
	QGridLayout *buttonLayout1 = new QGridLayout;
	buttonLayout1->addWidget(signinButton, 0, 0);
	buttonLayout1->addWidget(signupButton, 0, 1);

	QGridLayout *mainLayout = new QGridLayout;
	mainLayout->addWidget(emailLabel, 0, 0);
	mainLayout->addWidget(emailEdit, 0, 1);
	mainLayout->addWidget(passwordLabel, 1, 0);
	mainLayout->addWidget(passwordEdit, 1, 1);

	mainLayout->addLayout(buttonLayout1, 2, 0, 1, 2, Qt::AlignCenter);

	setLayout(mainLayout);
	setWindowTitle(tr("loginGui"));
	setFixedSize(400, 300);
}

void loginGui::connectUi()
{
	connect(signinButton, SIGNAL(clicked()), this, SLOT(signin()));
	connect(signupButton, SIGNAL(clicked()), this, SLOT(signup()));
}

void loginGui::connectAddressBook(QWidget* addressBook)
{
	if (mAddressBook == NULL) {
		mAddressBook = addressBook;
	}
}


void loginGui::signin()
{
	if (mAddressBook != NULL) {
		this->hide();
		mAddressBook->show();
	}
}
void loginGui::signup()
{
	qDebug() << "you just clciked signup button" << endl;
}
