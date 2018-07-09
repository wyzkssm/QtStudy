#include "stdafx.h"
#include "addressbook.h"
#include "loginGui.h"
#include "optionGui.h"


int main(int argc, char* argv[]) {



	QApplication app(argc, argv);

	AddressBook temp;
	loginGui temp2;
	optionGui temp3;

	temp.connectLoginGui(&temp2);
	temp.connectOptionGui(&temp3);
	temp2.connectAddressBook(&temp);
	temp3.connectAddressBook(&temp);

	temp2.show();

	return app.exec();
}

