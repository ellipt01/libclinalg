/*
 * c_linalg_lu.h
 *
 *  Created on: 2014/04/10
 *      Author: utsugi
 */

#ifndef C_LINALG_LU_H_
#define C_LINALG_LU_H_

#ifdef __cplusplus
extern "C" {
#endif

int		c_linalg_LU_decomp (c_matrix *a, c_vector_int **p);
void	c_linalg_LU_unpack (const c_matrix *lu, c_matrix **l, c_matrix **u);
int		c_linalg_LU_solve (c_matrix *a, c_vector *b, c_vector_int **p);
int		c_linalg_LU_svx (c_matrix *lu, c_vector *b, c_vector_int *p);
int		c_linalg_LU_invert (c_matrix *lu, c_vector_int *p);

#ifdef __cplusplus
}
#endif

#endif /* C_LINALG_LU_H_ */
