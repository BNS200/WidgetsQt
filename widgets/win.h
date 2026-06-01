#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QFrame>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QValidator>
#include <QTextCodec>
// #include <QtGui>

class StrValidator : public QValidator
{
public:
    StrValidator(QObject *parent = nullptr) : QValidator(parent) {}
    virtual State validate(QString &str, int &pos) const override
    {
        return Acceptable;
    }
};

class Win : public QWidget
{
    Q_OBJECT

protected:
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;

public:
    Win(QWidget *parent = nullptr);

public slots:
    void begin();
    void calc();
};

#endif // WIN_H
