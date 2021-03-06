/*
 * c_linalg.h
 *
 *  Wrapper of lapack, blas and qrupdate with a GSL like interface
 *
 *  Created on: 2014/04/08
 *      Author: utsugi
 */

#ifndef C_LINALG_H_
#define C_LINALG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include "clinalg_macros.h"
#include "clinalg_utils.h"
#include <c_vector.h>
#include <c_vectorops.h>
#include <c_matrix.h>
#include <c_matrixops.h>
#include <c_linalg_lapack.h>
#include <c_linalg_lu.h>
#include <c_linalg_cholesky.h>
#include <c_linalg_qr.h>
#include <c_linalg_sv.h>
#include <c_linalg_eigen.h>

#ifdef __cplusplus
}
#endif

#endif /* C_LINALG_H_ */
