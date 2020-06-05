//
// Created by YKROPCHIK on 05.06.2020.
//

class probabilityCalculator {
private:
    long double **decision;
    unsigned int maxThrows;

public:
    explicit probabilityCalculator(unsigned int maxThrows);
    long double calculate(unsigned int throws, unsigned int summ);
};
