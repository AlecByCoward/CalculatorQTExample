#pragma once
#include <QMainWindow>
#include <QLabel>
class QWidget;
class QKeyEvent;
#include <string>

class CalcFunc : public QMainWindow {
    Q_OBJECT

public:
    QLabel *NewResult;
    QLabel *OldResult;
    explicit CalcFunc(QWidget* parent = nullptr);
    ~CalcFunc();
    void keyPressEvent(QKeyEvent *event) override;

private:
    std::string NewEquption;
    std::string OldEquption;
    double result;
    bool justCalculated = false;

public Q_SLOTS:
    void UpdateDisplay();
    void One();
    void Two();
    void Three();
    void Four();
    void Five();
    void Six();
    void Seven();
    void Eight();
    void Nine();
    void Null();
    void Dot();
    void Per();
    void Plus();
    void Minus();
    void Div();
    void Multi();
    void Equel();
    void Del();
    void Clear();
};
