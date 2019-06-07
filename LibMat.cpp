// LibMat.cpp : Define las funciones exportadas de la aplicación DLL.
//

#include "stdafx.h"
#include <utility>
#include <limits.h>
#include "LibMat.h"

static unsigned long long anterior_;
static unsigned long long actual_;
static unsigned indice_;

void fibonacci_init(const unsigned long long a, const unsigned long long b) {
	indice_ = 0;
	anterior_ = a;
	actual_ = b;
}

bool fibonacci_next() {
	if ((ULLONG_MAX - anterior_ < actual_) ||
		(UINT_MAX == indice_)) {
		return false;
	}
	anterior_ += actual_;
	std::swap(actual_, anterior_);
	++indice_;
	return true;
}

unsigned fibonacci_indice() {
	return indice_;
}

unsigned long long fibonacci_actual() {
	return actual_;
}