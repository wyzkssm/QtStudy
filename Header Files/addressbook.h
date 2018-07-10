
#include "stdafx.h"


class AddressBook : public QWidget
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = 0);
	void connectLoginGui(QWidget* addressBook);
	void connectOptionGui(QWidget* addressBook);

private:
	QListWidget *addressList;

	QPushButton *addButton;
	QPushButton *deleteButton;
	QPushButton *loginGuiButton;
	QPushButton *optionGuiButton;
	QPushButton *optionGui1Button;

	QLabel *nameLabel;
	QLabel *emailLabel;

	void setupUi();
	void connectUi();

private:
	QWidget * mLoginGui;
	QWidget * mOptionGui;


private slots:
	void on_addButton_clicked();
	void on_addressList_currentItemChanged();
	void on_deleteButton_clicked();

	void gotoLoginGui();
	void gotoOptionGui();

};