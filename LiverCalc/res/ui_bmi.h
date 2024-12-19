/********************************************************************************
** Form generated from reading UI file 'bmi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMI_H
#define UI_BMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BMI_Form
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *height_label;
    QLineEdit *height_lineEdit;
    QLabel *label;
    QLCDNumber *bmi_lcdNumber;
    QLabel *bmi_res_label;
    QLabel *wight_label;
    QLineEdit *weight_lineEdit;
    QLabel *label_2;
    QGroupBox *arpi_groupBox;
    QGridLayout *gridLayout_7;
    QLabel *AST_label;
    QLineEdit *AST_lineEdit;
    QLabel *AST_unit_label;
    QLabel *ULN_label;
    QLCDNumber *arp_lcdNumber;
    QLabel *arp_res_label;
    QLabel *AST_label_2;
    QLineEdit *PLT_lineEdit;
    QLabel *PLT_unit_label;
    QGroupBox *fib4_groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *age_label;
    QLineEdit *age_lineEdit;
    QLabel *age_unit_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fib_ast_label;
    QLineEdit *fib_ast_lineEdit;
    QLabel *fib_ast_unit_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bcc_label;
    QLineEdit *bcc_lineEdit;
    QLabel *bcc_unit_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *fib_alt_label;
    QLineEdit *fib_alt_lineEdit;
    QLabel *fib_alt_unit_label;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *fib4_lcdNumber;
    QLabel *fib_res_label;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *shbv_checkBox;
    QCheckBox *fl_checkBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *ts_groupBox;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QLabel *si_label;
    QLineEdit *si_lineEdit;
    QLCDNumber *ts_lcdNumber;
    QLabel *ts_res_label;
    QLabel *fec_label;
    QLineEdit *fec_lineEdit;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *BMI_Form)
    {
        if (BMI_Form->objectName().isEmpty())
            BMI_Form->setObjectName(QString::fromUtf8("BMI_Form"));
        BMI_Form->resize(1208, 734);
        BMI_Form->setMinimumSize(QSize(980, 650));
        verticalLayout = new QVBoxLayout(BMI_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(BMI_Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        height_label = new QLabel(groupBox);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(height_label->sizePolicy().hasHeightForWidth());
        height_label->setSizePolicy(sizePolicy);
        height_label->setMinimumSize(QSize(90, 30));
        height_label->setMaximumSize(QSize(90, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        height_label->setFont(font1);

        gridLayout->addWidget(height_label, 0, 0, 1, 1);

        height_lineEdit = new QLineEdit(groupBox);
        height_lineEdit->setObjectName(QString::fromUtf8("height_lineEdit"));
        sizePolicy.setHeightForWidth(height_lineEdit->sizePolicy().hasHeightForWidth());
        height_lineEdit->setSizePolicy(sizePolicy);
        height_lineEdit->setMinimumSize(QSize(200, 30));
        height_lineEdit->setMaximumSize(QSize(200, 30));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        height_lineEdit->setFont(font2);

        gridLayout->addWidget(height_lineEdit, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(30, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        bmi_lcdNumber = new QLCDNumber(groupBox);
        bmi_lcdNumber->setObjectName(QString::fromUtf8("bmi_lcdNumber"));
        bmi_lcdNumber->setMinimumSize(QSize(0, 60));
        bmi_lcdNumber->setMaximumSize(QSize(1677215, 60));
        bmi_lcdNumber->setFont(font);

        gridLayout->addWidget(bmi_lcdNumber, 0, 3, 2, 1);

        bmi_res_label = new QLabel(groupBox);
        bmi_res_label->setObjectName(QString::fromUtf8("bmi_res_label"));
        bmi_res_label->setMinimumSize(QSize(200, 60));
        bmi_res_label->setMaximumSize(QSize(200, 60));
        QFont font4;
        font4.setPointSize(48);
        bmi_res_label->setFont(font4);

        gridLayout->addWidget(bmi_res_label, 0, 4, 2, 1);

        wight_label = new QLabel(groupBox);
        wight_label->setObjectName(QString::fromUtf8("wight_label"));
        sizePolicy.setHeightForWidth(wight_label->sizePolicy().hasHeightForWidth());
        wight_label->setSizePolicy(sizePolicy);
        wight_label->setMinimumSize(QSize(90, 30));
        wight_label->setMaximumSize(QSize(90, 30));
        wight_label->setFont(font1);

        gridLayout->addWidget(wight_label, 1, 0, 1, 1);

        weight_lineEdit = new QLineEdit(groupBox);
        weight_lineEdit->setObjectName(QString::fromUtf8("weight_lineEdit"));
        sizePolicy.setHeightForWidth(weight_lineEdit->sizePolicy().hasHeightForWidth());
        weight_lineEdit->setSizePolicy(sizePolicy);
        weight_lineEdit->setMinimumSize(QSize(200, 30));
        weight_lineEdit->setMaximumSize(QSize(200, 30));
        weight_lineEdit->setFont(font2);

        gridLayout->addWidget(weight_lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(35, 16777215));
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        arpi_groupBox = new QGroupBox(BMI_Form);
        arpi_groupBox->setObjectName(QString::fromUtf8("arpi_groupBox"));
        arpi_groupBox->setFont(font);
        gridLayout_7 = new QGridLayout(arpi_groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        AST_label = new QLabel(arpi_groupBox);
        AST_label->setObjectName(QString::fromUtf8("AST_label"));
        AST_label->setMinimumSize(QSize(50, 30));
        AST_label->setMaximumSize(QSize(50, 30));
        AST_label->setFont(font1);

        gridLayout_7->addWidget(AST_label, 0, 0, 1, 1);

        AST_lineEdit = new QLineEdit(arpi_groupBox);
        AST_lineEdit->setObjectName(QString::fromUtf8("AST_lineEdit"));
        AST_lineEdit->setMinimumSize(QSize(120, 30));
        AST_lineEdit->setMaximumSize(QSize(120, 30));
        AST_lineEdit->setFont(font2);

        gridLayout_7->addWidget(AST_lineEdit, 0, 1, 1, 1);

        AST_unit_label = new QLabel(arpi_groupBox);
        AST_unit_label->setObjectName(QString::fromUtf8("AST_unit_label"));
        AST_unit_label->setMinimumSize(QSize(50, 30));
        AST_unit_label->setMaximumSize(QSize(50, 30));
        AST_unit_label->setFont(font1);

        gridLayout_7->addWidget(AST_unit_label, 0, 2, 1, 1);

        ULN_label = new QLabel(arpi_groupBox);
        ULN_label->setObjectName(QString::fromUtf8("ULN_label"));
        ULN_label->setMinimumSize(QSize(250, 30));
        ULN_label->setMaximumSize(QSize(250, 30));
        ULN_label->setFont(font1);

        gridLayout_7->addWidget(ULN_label, 0, 3, 1, 1);

        arp_lcdNumber = new QLCDNumber(arpi_groupBox);
        arp_lcdNumber->setObjectName(QString::fromUtf8("arp_lcdNumber"));
        arp_lcdNumber->setMinimumSize(QSize(200, 60));
        arp_lcdNumber->setMaximumSize(QSize(16777215, 60));

        gridLayout_7->addWidget(arp_lcdNumber, 0, 4, 2, 1);

        arp_res_label = new QLabel(arpi_groupBox);
        arp_res_label->setObjectName(QString::fromUtf8("arp_res_label"));
        arp_res_label->setMinimumSize(QSize(200, 60));
        arp_res_label->setMaximumSize(QSize(200, 60));
        QFont font5;
        font5.setPointSize(28);
        arp_res_label->setFont(font5);

        gridLayout_7->addWidget(arp_res_label, 0, 5, 2, 1);

        AST_label_2 = new QLabel(arpi_groupBox);
        AST_label_2->setObjectName(QString::fromUtf8("AST_label_2"));
        AST_label_2->setMinimumSize(QSize(50, 30));
        AST_label_2->setMaximumSize(QSize(50, 30));
        AST_label_2->setFont(font1);

        gridLayout_7->addWidget(AST_label_2, 1, 0, 1, 1);

        PLT_lineEdit = new QLineEdit(arpi_groupBox);
        PLT_lineEdit->setObjectName(QString::fromUtf8("PLT_lineEdit"));
        PLT_lineEdit->setMinimumSize(QSize(120, 30));
        PLT_lineEdit->setMaximumSize(QSize(120, 30));
        PLT_lineEdit->setFont(font2);

        gridLayout_7->addWidget(PLT_lineEdit, 1, 1, 1, 1);

        PLT_unit_label = new QLabel(arpi_groupBox);
        PLT_unit_label->setObjectName(QString::fromUtf8("PLT_unit_label"));
        PLT_unit_label->setMinimumSize(QSize(70, 30));
        PLT_unit_label->setMaximumSize(QSize(70, 30));
        PLT_unit_label->setFont(font1);

        gridLayout_7->addWidget(PLT_unit_label, 1, 2, 1, 1);


        verticalLayout->addWidget(arpi_groupBox);

        fib4_groupBox = new QGroupBox(BMI_Form);
        fib4_groupBox->setObjectName(QString::fromUtf8("fib4_groupBox"));
        fib4_groupBox->setFont(font);
        gridLayout_3 = new QGridLayout(fib4_groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        age_label = new QLabel(fib4_groupBox);
        age_label->setObjectName(QString::fromUtf8("age_label"));
        age_label->setEnabled(true);
        age_label->setMinimumSize(QSize(120, 30));
        age_label->setMaximumSize(QSize(120, 30));
        age_label->setFont(font1);
        age_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(age_label);

        age_lineEdit = new QLineEdit(fib4_groupBox);
        age_lineEdit->setObjectName(QString::fromUtf8("age_lineEdit"));
        age_lineEdit->setMinimumSize(QSize(120, 30));
        age_lineEdit->setMaximumSize(QSize(120, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(16);
        font6.setBold(false);
        font6.setWeight(50);
        age_lineEdit->setFont(font6);

        horizontalLayout->addWidget(age_lineEdit);

        age_unit_label = new QLabel(fib4_groupBox);
        age_unit_label->setObjectName(QString::fromUtf8("age_unit_label"));
        age_unit_label->setMinimumSize(QSize(80, 30));
        age_unit_label->setMaximumSize(QSize(81, 30));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setWeight(50);
        age_unit_label->setFont(font7);

        horizontalLayout->addWidget(age_unit_label);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fib_ast_label = new QLabel(fib4_groupBox);
        fib_ast_label->setObjectName(QString::fromUtf8("fib_ast_label"));
        fib_ast_label->setMinimumSize(QSize(50, 30));
        fib_ast_label->setMaximumSize(QSize(50, 30));
        fib_ast_label->setFont(font1);

        horizontalLayout_3->addWidget(fib_ast_label);

        fib_ast_lineEdit = new QLineEdit(fib4_groupBox);
        fib_ast_lineEdit->setObjectName(QString::fromUtf8("fib_ast_lineEdit"));
        fib_ast_lineEdit->setMinimumSize(QSize(120, 30));
        fib_ast_lineEdit->setMaximumSize(QSize(120, 30));
        fib_ast_lineEdit->setFont(font6);

        horizontalLayout_3->addWidget(fib_ast_lineEdit);

        fib_ast_unit_label = new QLabel(fib4_groupBox);
        fib_ast_unit_label->setObjectName(QString::fromUtf8("fib_ast_unit_label"));
        fib_ast_unit_label->setMinimumSize(QSize(50, 30));
        fib_ast_unit_label->setMaximumSize(QSize(50, 30));
        fib_ast_unit_label->setFont(font7);

        horizontalLayout_3->addWidget(fib_ast_unit_label);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bcc_label = new QLabel(fib4_groupBox);
        bcc_label->setObjectName(QString::fromUtf8("bcc_label"));
        bcc_label->setMinimumSize(QSize(120, 30));
        bcc_label->setMaximumSize(QSize(120, 30));
        bcc_label->setFont(font1);

        horizontalLayout_2->addWidget(bcc_label);

        bcc_lineEdit = new QLineEdit(fib4_groupBox);
        bcc_lineEdit->setObjectName(QString::fromUtf8("bcc_lineEdit"));
        bcc_lineEdit->setMinimumSize(QSize(120, 30));
        bcc_lineEdit->setMaximumSize(QSize(120, 30));
        bcc_lineEdit->setFont(font6);

        horizontalLayout_2->addWidget(bcc_lineEdit);

        bcc_unit_label = new QLabel(fib4_groupBox);
        bcc_unit_label->setObjectName(QString::fromUtf8("bcc_unit_label"));
        bcc_unit_label->setMinimumSize(QSize(80, 30));
        bcc_unit_label->setMaximumSize(QSize(80, 30));
        bcc_unit_label->setFont(font7);

        horizontalLayout_2->addWidget(bcc_unit_label);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        fib_alt_label = new QLabel(fib4_groupBox);
        fib_alt_label->setObjectName(QString::fromUtf8("fib_alt_label"));
        fib_alt_label->setMinimumSize(QSize(50, 30));
        fib_alt_label->setMaximumSize(QSize(50, 30));
        fib_alt_label->setFont(font1);

        horizontalLayout_4->addWidget(fib_alt_label);

        fib_alt_lineEdit = new QLineEdit(fib4_groupBox);
        fib_alt_lineEdit->setObjectName(QString::fromUtf8("fib_alt_lineEdit"));
        fib_alt_lineEdit->setMinimumSize(QSize(120, 30));
        fib_alt_lineEdit->setMaximumSize(QSize(120, 30));
        fib_alt_lineEdit->setFont(font6);

        horizontalLayout_4->addWidget(fib_alt_lineEdit);

        fib_alt_unit_label = new QLabel(fib4_groupBox);
        fib_alt_unit_label->setObjectName(QString::fromUtf8("fib_alt_unit_label"));
        fib_alt_unit_label->setMinimumSize(QSize(50, 30));
        fib_alt_unit_label->setMaximumSize(QSize(50, 30));
        fib_alt_unit_label->setFont(font7);

        horizontalLayout_4->addWidget(fib_alt_unit_label);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        fib4_lcdNumber = new QLCDNumber(fib4_groupBox);
        fib4_lcdNumber->setObjectName(QString::fromUtf8("fib4_lcdNumber"));
        fib4_lcdNumber->setMinimumSize(QSize(100, 60));
        fib4_lcdNumber->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_5->addWidget(fib4_lcdNumber);

        fib_res_label = new QLabel(fib4_groupBox);
        fib_res_label->setObjectName(QString::fromUtf8("fib_res_label"));
        fib_res_label->setMinimumSize(QSize(200, 60));
        fib_res_label->setMaximumSize(QSize(200, 60));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font8.setPointSize(28);
        font8.setBold(true);
        font8.setWeight(75);
        fib_res_label->setFont(font8);

        horizontalLayout_5->addWidget(fib_res_label);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        shbv_checkBox = new QCheckBox(fib4_groupBox);
        shbv_checkBox->setObjectName(QString::fromUtf8("shbv_checkBox"));
        shbv_checkBox->setMinimumSize(QSize(300, 30));
        shbv_checkBox->setMaximumSize(QSize(300, 30));
        shbv_checkBox->setFont(font1);

        horizontalLayout_6->addWidget(shbv_checkBox);

        fl_checkBox = new QCheckBox(fib4_groupBox);
        fl_checkBox->setObjectName(QString::fromUtf8("fl_checkBox"));
        fl_checkBox->setMinimumSize(QSize(240, 30));
        fl_checkBox->setMaximumSize(QSize(240, 30));
        fl_checkBox->setFont(font1);

        horizontalLayout_6->addWidget(fl_checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        verticalLayout->addWidget(fib4_groupBox);

        ts_groupBox = new QGroupBox(BMI_Form);
        ts_groupBox->setObjectName(QString::fromUtf8("ts_groupBox"));
        ts_groupBox->setFont(font);
        gridLayout_6 = new QGridLayout(ts_groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        si_label = new QLabel(ts_groupBox);
        si_label->setObjectName(QString::fromUtf8("si_label"));
        si_label->setMinimumSize(QSize(200, 30));
        si_label->setMaximumSize(QSize(110, 30));
        si_label->setFont(font1);

        gridLayout_4->addWidget(si_label, 0, 0, 1, 1);

        si_lineEdit = new QLineEdit(ts_groupBox);
        si_lineEdit->setObjectName(QString::fromUtf8("si_lineEdit"));
        si_lineEdit->setMinimumSize(QSize(120, 30));
        si_lineEdit->setMaximumSize(QSize(120, 30));
        si_lineEdit->setFont(font2);

        gridLayout_4->addWidget(si_lineEdit, 0, 1, 1, 1);

        ts_lcdNumber = new QLCDNumber(ts_groupBox);
        ts_lcdNumber->setObjectName(QString::fromUtf8("ts_lcdNumber"));
        ts_lcdNumber->setMinimumSize(QSize(100, 60));
        ts_lcdNumber->setMaximumSize(QSize(16777215, 60));

        gridLayout_4->addWidget(ts_lcdNumber, 0, 2, 2, 1);

        ts_res_label = new QLabel(ts_groupBox);
        ts_res_label->setObjectName(QString::fromUtf8("ts_res_label"));
        ts_res_label->setMinimumSize(QSize(200, 60));
        ts_res_label->setMaximumSize(QSize(200, 60));
        ts_res_label->setFont(font5);

        gridLayout_4->addWidget(ts_res_label, 0, 3, 2, 1);

        fec_label = new QLabel(ts_groupBox);
        fec_label->setObjectName(QString::fromUtf8("fec_label"));
        fec_label->setMinimumSize(QSize(200, 30));
        fec_label->setMaximumSize(QSize(110, 30));
        fec_label->setFont(font1);

        gridLayout_4->addWidget(fec_label, 1, 0, 1, 1);

        fec_lineEdit = new QLineEdit(ts_groupBox);
        fec_lineEdit->setObjectName(QString::fromUtf8("fec_lineEdit"));
        fec_lineEdit->setMinimumSize(QSize(120, 30));
        fec_lineEdit->setMaximumSize(QSize(120, 30));
        fec_lineEdit->setFont(font2);

        gridLayout_4->addWidget(fec_lineEdit, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(ts_groupBox);

        textBrowser = new QTextBrowser(BMI_Form);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 0));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font9.setPointSize(14);
        textBrowser->setFont(font9);

        verticalLayout->addWidget(textBrowser);


        retranslateUi(BMI_Form);

        QMetaObject::connectSlotsByName(BMI_Form);
    } // setupUi

    void retranslateUi(QWidget *BMI_Form)
    {
        BMI_Form->setWindowTitle(QCoreApplication::translate("BMI_Form", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BMI_Form", "BMI\350\256\241\347\256\227", nullptr));
        height_label->setText(QCoreApplication::translate("BMI_Form", "\350\272\253\351\253\230: ", nullptr));
        label->setText(QCoreApplication::translate("BMI_Form", "\347\261\263", nullptr));
        bmi_res_label->setText(QString());
        wight_label->setText(QCoreApplication::translate("BMI_Form", "\344\275\223\351\207\215:", nullptr));
        label_2->setText(QCoreApplication::translate("BMI_Form", "\345\205\254\346\226\244", nullptr));
        arpi_groupBox->setTitle(QCoreApplication::translate("BMI_Form", "\345\244\251\351\227\250\345\206\254\346\260\250\351\205\270\346\260\250\345\237\272\350\275\254\347\247\273\351\205\266\344\270\216\350\241\200\345\260\217\346\235\277\346\257\224\345\200\274(APRI)\350\257\204\345\210\206", nullptr));
        AST_label->setText(QCoreApplication::translate("BMI_Form", "AST:", nullptr));
        AST_unit_label->setText(QCoreApplication::translate("BMI_Form", "IU/L", nullptr));
        ULN_label->setText(QCoreApplication::translate("BMI_Form", "ULN(AST\344\270\212\351\231\220\345\200\274):(40)IU/L", nullptr));
        arp_res_label->setText(QString());
        AST_label_2->setText(QCoreApplication::translate("BMI_Form", "PLT:", nullptr));
        PLT_unit_label->setText(QCoreApplication::translate("BMI_Form", "10^9/L", nullptr));
        fib4_groupBox->setTitle(QCoreApplication::translate("BMI_Form", "\346\205\242\346\200\247\350\202\235\347\227\205\346\202\243\350\200\205\350\202\235\347\272\244\347\273\264\345\214\226FIB-4\346\214\207\346\225\260", nullptr));
        age_label->setText(QCoreApplication::translate("BMI_Form", "\345\271\264\351\276\204:", nullptr));
        age_lineEdit->setText(QString());
        age_unit_label->setText(QCoreApplication::translate("BMI_Form", "\345\262\201", nullptr));
        fib_ast_label->setText(QCoreApplication::translate("BMI_Form", "AST:", nullptr));
        fib_ast_unit_label->setText(QCoreApplication::translate("BMI_Form", "IU/L", nullptr));
        bcc_label->setText(QCoreApplication::translate("BMI_Form", "\350\241\200\345\260\217\346\235\277\350\256\241\346\225\260:", nullptr));
        bcc_lineEdit->setText(QString());
        bcc_unit_label->setText(QCoreApplication::translate("BMI_Form", "10^9/L", nullptr));
        fib_alt_label->setText(QCoreApplication::translate("BMI_Form", "ALT:", nullptr));
        fib_alt_lineEdit->setText(QString());
        fib_alt_unit_label->setText(QCoreApplication::translate("BMI_Form", "IU/L", nullptr));
        fib_res_label->setText(QString());
        shbv_checkBox->setText(QCoreApplication::translate("BMI_Form", "\346\205\242\346\200\247\344\271\231\345\236\213\350\202\235\347\202\216\346\210\226\344\270\231\345\236\213\350\202\235\347\202\216", nullptr));
        fl_checkBox->setText(QCoreApplication::translate("BMI_Form", "\351\235\236\351\205\222\347\262\276\346\200\247\350\204\202\350\202\252\350\202\235", nullptr));
        ts_groupBox->setTitle(QCoreApplication::translate("BMI_Form", "\350\275\254\351\223\201\350\233\213\347\231\275\351\245\261\345\222\214\345\272\246", nullptr));
        si_label->setText(QCoreApplication::translate("BMI_Form", "\350\241\200\346\270\205\351\223\201(\345\276\256\345\205\213/\345\210\206\345\215\207):", nullptr));
        si_lineEdit->setText(QString());
        ts_res_label->setText(QString());
        fec_label->setText(QCoreApplication::translate("BMI_Form", "\346\200\273\351\223\201\347\273\223\345\220\210\350\203\275\345\212\233(ug/dL):", nullptr));
        fec_lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BMI_Form: public Ui_BMI_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMI_H
