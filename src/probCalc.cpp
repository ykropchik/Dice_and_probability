//
// Created by YKROPCHIK on 05.06.2020.
//

#include "probCalc.h"

probabilityCalculator::probabilityCalculator(unsigned int maxThrows) {
    this->maxThrows = maxThrows;
    this->decision = new long double *[maxThrows];

    for (int i = 0; i < maxThrows; ++i) {
        decision[i] = new long double[(6 * i) + 1];
    }

    for (int i = 0; i < maxThrows; ++i) {
        for (int j = 0; j < (6 * i); ++j) {
            decision[i][j] = 0.;
        }
    }
}

long double probabilityCalculator::calculate(unsigned int throws, unsigned int summ) {
    long double test;

    if ((summ < throws) || (summ > (throws * 6))) {
        return 0.;
    }

    if (throws == 0) {
        return 1.;
    }

    if (decision[throws][summ] == 0) {
        decision[throws][summ] = (calculate(throws - 1, summ - 1) +
                                  calculate(throws - 1, summ - 2) +
                                  calculate(throws - 1, summ - 3) +
                                  calculate(throws - 1, summ - 4) +
                                  calculate(throws - 1, summ - 5) +
                                  calculate(throws - 1, summ - 6)) / 6.;
    }

    return decision[throws][summ];
}
