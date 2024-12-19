/********************************************************************************
** Form generated from reading UI file 'root.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOT_H
#define UI_ROOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICEHelper
{
public:
    QAction *actionopen;
    QAction *actionBMI;
    QAction *actionExcelColFilter;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuOption;

    void setupUi(QMainWindow *ICEHelper)
    {
        if (ICEHelper->objectName().isEmpty())
            ICEHelper->setObjectName(QString::fromUtf8("ICEHelper"));
        ICEHelper->resize(1088, 724);
        ICEHelper->setMinimumSize(QSize(1080, 700));
        actionopen = new QAction(ICEHelper);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionBMI = new QAction(ICEHelper);
        actionBMI->setObjectName(QString::fromUtf8("actionBMI"));
        actionExcelColFilter = new QAction(ICEHelper);
        actionExcelColFilter->setObjectName(QString::fromUtf8("actionExcelColFilter"));
        centralwidget = new QWidget(ICEHelper);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        ICEHelper->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(ICEHelper);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1088, 26));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        ICEHelper->setMenuBar(menuBar);

        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuOption->menuAction());
        menuTools->addAction(actionBMI);
        menuOption->addAction(actionExcelColFilter);

        retranslateUi(ICEHelper);

        QMetaObject::connectSlotsByName(ICEHelper);
    } // setupUi

    void retranslateUi(QMainWindow *ICEHelper)
    {
        ICEHelper->setWindowTitle(QCoreApplication::translate("ICEHelper", "ICE Helper", nullptr));
        actionopen->setText(QCoreApplication::translate("ICEHelper", "open", nullptr));
        actionBMI->setText(QCoreApplication::translate("ICEHelper", "BMI", nullptr));
        actionExcelColFilter->setText(QCoreApplication::translate("ICEHelper", "ExcelColFilter", nullptr));
        menuTools->setTitle(QCoreApplication::translate("ICEHelper", "Tools", nullptr));
        menuOption->setTitle(QCoreApplication::translate("ICEHelper", "Option", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ICEHelper: public Ui_ICEHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
