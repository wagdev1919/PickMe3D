/********************************************************************************
** Form generated from reading UI file 'room3d.ui'
**
** Created: Tue Oct 30 09:28:14 2012
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM3D_H
#define UI_ROOM3D_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Room3DClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *Room3DClass)
    {
        if (Room3DClass->objectName().isEmpty())
            Room3DClass->setObjectName(QString::fromUtf8("Room3DClass"));
        Room3DClass->resize(760, 602);
        centralWidget = new QWidget(Room3DClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Room3DClass->setCentralWidget(centralWidget);

        retranslateUi(Room3DClass);

        QMetaObject::connectSlotsByName(Room3DClass);
    } // setupUi

    void retranslateUi(QMainWindow *Room3DClass)
    {
        Room3DClass->setWindowTitle(QApplication::translate("Room3DClass", "Room3D", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Room3DClass: public Ui_Room3DClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM3D_H
