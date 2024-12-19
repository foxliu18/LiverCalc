#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_root.h"

class LiverCalc : public QMainWindow
{
    Q_OBJECT

public:
    LiverCalc(QWidget *parent = Q_NULLPTR);

private:
    Ui::ICEHelper ui;
};
