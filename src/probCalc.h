//
// Created by YKROPCHIK on 05.06.2020.
//

class probabilityCalculator {
private:
    long double **decision;

public:
    probabilityCalculator(unsigned int maxThrows);
    long double probability(unsigned int throws, unsigned int summ);
};
