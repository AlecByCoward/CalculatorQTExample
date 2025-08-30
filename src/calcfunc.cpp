#include "../include/calcfunc.h"
#include <QWidget>
#include <QKeyEvent>
#include <vector>
#include <QString>
#include <cmath>
#include <cctype>

CalcFunc::CalcFunc(QWidget* parent) : QMainWindow(parent) {}

CalcFunc::~CalcFunc() {}

void CalcFunc::keyPressEvent(QKeyEvent *event) {
    int key = event->key();
    if ((key >= Qt::Key_0 && key <= Qt::Key_9) ||
        key == Qt::Key_Plus || key == Qt::Key_Minus ||
        key == Qt::Key_Asterisk || key == Qt::Key_Slash ||
        key == Qt::Key_Percent || key == Qt::Key_Period ||
        key == Qt::Key_Enter || key == Qt::Key_Return ||
        key == Qt::Key_Backspace) {
        switch (key) {
            case Qt::Key_0: Null(); break;
            case Qt::Key_1: One(); break;
            case Qt::Key_2: Two(); break;
            case Qt::Key_3: Three(); break;
            case Qt::Key_4: Four(); break;
            case Qt::Key_5: Five(); break;
            case Qt::Key_6: Six(); break;
            case Qt::Key_7: Seven(); break;
            case Qt::Key_8: Eight(); break;
            case Qt::Key_9: Nine(); break;
            case Qt::Key_Plus: Plus(); break;
            case Qt::Key_Minus: Minus(); break;
            case Qt::Key_Asterisk: Multi(); break;
            case Qt::Key_Slash: Div(); break;
            case Qt::Key_Percent: Per(); break;
            case Qt::Key_Period: Dot(); break;
            case Qt::Key_Enter:
            case Qt::Key_Return: Equel(); break;
            case Qt::Key_Backspace: Del(); break;
        }
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

void CalcFunc::UpdateDisplay() {
    NewResult->setText(QString::fromStdString(NewEquption));
}


void CalcFunc::One()    { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "1"; UpdateDisplay(); }
void CalcFunc::Two()    { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "2"; UpdateDisplay(); }
void CalcFunc::Three()  { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "3"; UpdateDisplay(); }
void CalcFunc::Four()   { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "4"; UpdateDisplay(); }
void CalcFunc::Five()   { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "5"; UpdateDisplay(); }
void CalcFunc::Six()    { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "6"; UpdateDisplay(); }
void CalcFunc::Seven()  { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "7"; UpdateDisplay(); }
void CalcFunc::Eight()  { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "8"; UpdateDisplay(); }
void CalcFunc::Nine()   { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "9"; UpdateDisplay(); }
void CalcFunc::Null()   { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "0"; UpdateDisplay(); }
void CalcFunc::Dot()    { if (justCalculated) { NewEquption.clear(); justCalculated = false; } NewEquption += "."; UpdateDisplay(); }

void CalcFunc::Plus()   { if (justCalculated) justCalculated = false; NewEquption += "+"; UpdateDisplay(); }
void CalcFunc::Minus()  { if (justCalculated) justCalculated = false; NewEquption += "-"; UpdateDisplay(); }
void CalcFunc::Div()    { if (justCalculated) justCalculated = false; NewEquption += "/"; UpdateDisplay(); }
void CalcFunc::Multi()  { if (justCalculated) justCalculated = false; NewEquption += "*"; UpdateDisplay(); }
void CalcFunc::Per()    { if (justCalculated) justCalculated = false; NewEquption += "%"; UpdateDisplay(); }

void CalcFunc::Equel() {
    std::vector<double> numbers;
    std::vector<char> ops;
    std::string num_str;
    for (char c : NewEquption) {
        if (isdigit(c) || c == '.') {
            num_str += c;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (!num_str.empty()) {
                numbers.push_back(std::stod(num_str));
                num_str.clear();
            }
            ops.push_back(c);
        }
    }
    if (!num_str.empty()) numbers.push_back(std::stod(num_str));

    for (size_t i = 0; i < ops.size(); ) {
        if (ops[i] == '*' || ops[i] == '/') {
            double left = numbers[i];
            double right = numbers[i+1];
            double res = (ops[i] == '*') ? (left * right) : (left / right);
            numbers[i] = res;
            numbers.erase(numbers.begin() + i + 1);
            ops.erase(ops.begin() + i);
        } else {
            ++i;
        }
    }

    double result = numbers[0];
    for (size_t i = 0; i < ops.size(); ++i) {
        if (ops[i] == '+') result += numbers[i+1];
        else if (ops[i] == '-') result -= numbers[i+1];
    }

    if (std::floor(result) == result) {
        NewEquption = std::to_string(static_cast<int>(result));
    } else {
        NewEquption = std::to_string(result);
    }
    NewResult->setText(QString::fromStdString(NewEquption));
    justCalculated = true;
}

void CalcFunc::Del() {
    if (!NewEquption.empty()) NewEquption.pop_back();
    UpdateDisplay();
}

void CalcFunc::Clear() {
    OldEquption = NewEquption;
    NewEquption.clear();
    OldResult->setText(QString::fromStdString(OldEquption));
    UpdateDisplay();
} 