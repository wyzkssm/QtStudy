/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
#include "stdafx.h"

class Ui_AddDialog
{
public:
	QWidget * widget;
	QGridLayout *gridLayout_2;
	QHBoxLayout *horizontalLayout;
	QSpacerItem *horizontalSpacer;
	QPushButton *okButton;
	QVBoxLayout *verticalLayout;
	QGridLayout *gridLayout;
	QLineEdit *nameEdit;
	QLabel *emailText;
	QLineEdit *emailEdit;
	QLabel *nameText;
	QSpacerItem *verticalSpacer;

	void setupUi(QDialog *AddDialog);
	void retranslateUi(QDialog *AddDialog);

};

//namespace Ui {
//	class AddDialog : public Ui_AddDialog {};
//} // namespace Ui
//class AddDialog : public QDialog, public Ui::AddDialog


class AddDialog : public QDialog, public Ui_AddDialog
{
	Q_OBJECT

public:
	AddDialog(QWidget *parent = Q_NULLPTR);
	~AddDialog();

};
