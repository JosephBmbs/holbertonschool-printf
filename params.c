#include "main.h"

/**
 * init_params - initializes the parameters struct
 * with default values
 *
 * This function clears all the fields of the
 * parameters struct and sets
 * the default values. It also resets the buf.
 *
 * @params: a pointer to the parameters struct to initialize
 * @ap: a va_list object that points to the list of arguments
 */
void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->precision = UINT_MAX;

	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
