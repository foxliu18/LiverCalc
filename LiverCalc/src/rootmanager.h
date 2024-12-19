//
// Created by liu on 2024/12/19.
//

#ifndef ROOTMANAGER_H
#define ROOTMANAGER_H

#include <QMainWindow>
#include "../res/ui_root.h"
#include "./Bmi.h"

QT_BEGIN_NAMESPACE
namespace Ui { class RootManager; }
QT_END_NAMESPACE

class RootManager : public QMainWindow {
Q_OBJECT

public:
    explicit RootManager(QMainWindow *parent = nullptr);
    ~RootManager() override;

public slots:
    void switch_page();

private:
    Ui::ICEHelper *ui;
    Bmi * bmi;



};


#endif //ROOTMANAGER_H
