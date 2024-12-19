//
// Created by liu on 2024/12/19.
//

// You may need to build the project (run Qt uic code generator) to get "ui_bmi.h" resolved

#include "Bmi.h"
#include <QDoubleValidator>
#include <QIntValidator>


Bmi::Bmi(QWidget *parent) :
    QWidget(parent), ui(new Ui::BMI_Form) {
    ui->setupUi(this);

    initialize_ui();
}

Bmi::~Bmi() {
    delete ui;
}

void Bmi::initialize_ui() {
    ui->height_lineEdit->setValidator(new QDoubleValidator());
    ui->weight_lineEdit->setValidator(new QDoubleValidator());
    ui->AST_lineEdit->setValidator(new QDoubleValidator());
    ui->PLT_lineEdit->setValidator(new QDoubleValidator());
    ui->age_lineEdit->setValidator(new QIntValidator());
    ui->bcc_lineEdit->setValidator(new QDoubleValidator());
    ui->fib_alt_lineEdit->setValidator(new QDoubleValidator());
    ui->fib_ast_lineEdit->setValidator(new QDoubleValidator());
    ui->si_lineEdit->setValidator(new QDoubleValidator());
    ui->fec_lineEdit->setValidator(new QDoubleValidator());

    connect(ui->height_lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(calc_bmi()));
    connect(ui->height_lineEdit, SIGNAL(editingFinished()), this, SLOT(log_bmi()));

    connect(ui->weight_lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(calc_bmi()));
    connect(ui->weight_lineEdit, SIGNAL(editingFinished()), this, SLOT(log_bmi()));
}

void Bmi::calc_bmi() {
    if (ui->height_lineEdit->text() == "" or ui->weight_lineEdit->text() == "")
            return;
        float height = ui->height_lineEdit->text().toFloat();
        float weight = ui->weight_lineEdit->text().toFloat();
        if (height == 0) {
            bmi = 0;
            ui->bmi_lcdNumber->display(0);
            ui->bmi_res_label->setText("");
            return;
        }
        float bmi_l = weight / (height * height);
        bmi = bmi_l;
        ui->bmi_lcdNumber->display(bmi);
        R bmi_res = define_bmi(bmi);
        ui->bmi_res_label->setAlignment(Qt::AlignCenter);
        ui->bmi_res_label->setText(bmi_res.state);
        ui->bmi_res_label->setStyleSheet(bmi_res.style);
}

void Bmi::calc_arp() {
}

void Bmi::calc_fib_4() {
}

void Bmi::calc_ts() {
}

void Bmi::log_bmi() {
    if (ui->height_lineEdit->text() == "" || ui->weight_lineEdit->text() == "" or bmi == 0)
            return;
    ui->textBrowser->append("身高: " + ui->height_lineEdit->text() +"   体重: " + ui->weight_lineEdit->text() + "  ===>   BMI: " +  QString::number(bmi, 'f', 2));
}

R Bmi::define_bmi(float bmi) {
    R bmi_r;
    if (bmi < 18.5) {
        bmi_r.state = "低体重";
        bmi_r.style = "color:blue ; font-size: 35px; font-weight: bold; font-family: 微软雅黑;text-align: center;";
    }
    else if (18.5 <= bmi &&  bmi < 23.9) {
        bmi_r.state = "正常";
        bmi_r.style = "color:green ; font-size: 35px; font-weight: bold; font-family: 微软雅黑;text-align: center;";
    }else if (24.0 <= bmi &&  bmi < 27.9) {
        bmi_r.state = "超重";
        bmi_r.style = "color:orange ; font-size: 35px; font-weight: bold; font-family: 微软雅黑;text-align: center;";
    }else {
        bmi_r.state = "肥胖";
        bmi_r.style = "color:red ; font-size: 35px; font-weight: bold; font-family: 微软雅黑;text-align: center;";
    }
        return bmi_r;
}
