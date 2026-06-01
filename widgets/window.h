#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui>
#include "area.h"
#include <QPushButton>
#include <QBoxLayout>

class Window : public QWidget
{
    Q_OBJECT
protected:
    Area *area;
    QPushButton *btn;
public:
    Window();
};

#endif
