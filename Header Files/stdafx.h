#pragma once

#include <iostream>
#include <string>
#include <fstream>

#ifdef _DEBUG
#pragma comment(lib, "qtmaind.lib")
#pragma comment(lib, "Qt5Cored.lib")
#pragma comment(lib, "Qt5Guid.lib")
#pragma comment(lib, "Qt5Widgetsd.lib")

#else

#pragma comment(lib, "qtmain.lib")
#pragma comment(lib, "Qt5Core.lib")
#pragma comment(lib, "Qt5Gui.lib")
#pragma comment(lib, "Qt5Widgets.lib")

#endif


#include <QtWidgets/qapplication.h>
#include <QtWidgets/qabstractbutton.h>
#include <QtWidgets/qbuttongroup.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qboxlayout.h>

#include <QtWidgets/qlistwidget.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qdialog.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qtextedit.h>


#include <QtCore/qobject.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qmetaobject.h>

#include <QtCore/qdebug.h>

using namespace std;