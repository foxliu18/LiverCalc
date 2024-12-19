//
// Created by liu on 2024/12/19.
//

// You may need to build the project (run Qt uic code generator) to get "ui_RootManager.h" resolved

#include "rootmanager.h"




RootManager::RootManager(QMainWindow *parent) :
     ui(new Ui::ICEHelper) {
    ui->setupUi(this);

    this->setWindowTitle("Ice Helper");
    this->setWindowIcon(QIcon(":/res/img/apple.svg/"));
    this->bmi = new Bmi();
    this->ui->stackedWidget->addWidget(this->bmi);
    ui->stackedWidget->setCurrentWidget(this->bmi);
    connect(ui->actionBMI, SIGNAL(triggered()), this, SLOT(switch_page()));

}

RootManager::~RootManager() {
    delete ui;
}

void RootManager::switch_page() {
    this->ui->stackedWidget->setCurrentWidget(this->bmi);
}
