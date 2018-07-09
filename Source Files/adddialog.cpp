#include "stdafx.h"
#include "adddialog.h"


void Ui_AddDialog::setupUi(QDialog *AddDialog)
{
	if (AddDialog->objectName().isEmpty())
		AddDialog->setObjectName(QStringLiteral("AddDialog"));
	AddDialog->resize(400, 300);
	widget = new QWidget(AddDialog);
	widget->setObjectName(QStringLiteral("widget"));
	widget->setGeometry(QRect(30, 30, 351, 201));
	
	{
		gridLayout_2 = new QGridLayout(widget);
		gridLayout_2->setSpacing(6);
		gridLayout_2->setContentsMargins(11, 11, 11, 11);
		gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
		gridLayout_2->setContentsMargins(0, 0, 0, 0);

		{
			horizontalLayout = new QHBoxLayout();
			horizontalLayout->setSpacing(6);
			horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
			gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

			horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
			horizontalLayout->addItem(horizontalSpacer);

			okButton = new QPushButton(widget);
			okButton->setObjectName(QStringLiteral("okButton"));
			horizontalLayout->addWidget(okButton);
		}

		{
			verticalLayout = new QVBoxLayout();
			verticalLayout->setSpacing(6);
			verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
			gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

			{
				gridLayout = new QGridLayout();
				gridLayout->setSpacing(6);
				gridLayout->setObjectName(QStringLiteral("gridLayout"));
				verticalLayout->addLayout(gridLayout);

				nameEdit = new QLineEdit(widget);
				nameEdit->setObjectName(QStringLiteral("nameEdit"));
				gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

				emailText = new QLabel(widget);
				emailText->setObjectName(QStringLiteral("emailText"));
				gridLayout->addWidget(emailText, 1, 0, 1, 1);

				emailEdit = new QLineEdit(widget);
				emailEdit->setObjectName(QStringLiteral("emailEdit"));
				gridLayout->addWidget(emailEdit, 1, 1, 1, 1);

				nameText = new QLabel(widget);
				nameText->setObjectName(QStringLiteral("nameText"));
				gridLayout->addWidget(nameText, 0, 0, 1, 1);
			}
			
			verticalSpacer = new QSpacerItem(38, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
			verticalLayout->addItem(verticalSpacer);

		}

	}
	


	retranslateUi(AddDialog);
	QObject::connect(okButton, SIGNAL(clicked()), AddDialog, SLOT(accept()));

	QMetaObject::connectSlotsByName(AddDialog);
} // setupUi

void Ui_AddDialog::retranslateUi(QDialog *AddDialog)
{
	AddDialog->setWindowTitle(QApplication::translate("AddDialog", "Add Address", nullptr));
	okButton->setText(QApplication::translate("AddDialog", "OK", nullptr));
	emailText->setText(QApplication::translate("AddDialog", "Email:", nullptr));
	nameText->setText(QApplication::translate("AddDialog", "Name:", nullptr));
} // retranslateUi


AddDialog::AddDialog(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

AddDialog::~AddDialog()
{
}
