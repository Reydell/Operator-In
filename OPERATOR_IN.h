//
// Created by Anton Karpov on 06.05.2021.
//

#ifndef PREPROCESSOR_OPERATOR_IN_H
#define PREPROCESSOR_OPERATOR_IN_H

struct IN {};

template<class T>
struct LEFT_RESULT {
    const T& var;
    explicit LEFT_RESULT(const T& val) : var(val) {}
    template<class TContainer>
    bool operator* (const TContainer& container) const {
        return std::find(container.begin(), container.end(), var) != container.end();
    }
};

template <class T>
LEFT_RESULT<T> operator* (const T&  var, const IN&) {
    return LEFT_RESULT<T>(var);
}

#define in *IN{}*   // a in L  ->  a *IN{}* L

#endif
