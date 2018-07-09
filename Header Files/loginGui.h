#pragma once
#include "stdafx.h"

class loginGui : public QWidget {

	Q_OBJECT

public:
	loginGui(QWidget *parent = 0);

	void connectAddressBook(QWidget* addressBook);

private:

	QWidget * mAddressBook;

	QLineEdit *emailEdit;
	QLineEdit *passwordEdit;

	QPushButton *signinButton;
	QPushButton *signupButton;

	void setupUi();
	void connectUi();
	//void signinButton_listener(QWidget* partner);
	//void signupButton_listener(QWidget* partner);


private slots:
	void signin();
	void signup();
};

