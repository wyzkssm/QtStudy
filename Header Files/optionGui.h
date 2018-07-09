#pragma once

#include "stdafx.h"

class optionGui : public QWidget {

	Q_OBJECT

public:
	optionGui(QWidget *parent = 0);

	void connectAddressBook(QWidget* addressBook);

private:

	QWidget * mAddressBook;

	QPushButton *tempButton;

	void setupUi();
	void connectUi();


private slots:
	void temp1();
};

