#ifndef _NGX_HTTP_SECURE_TOKEN_MPD_H_INCLUDED_
#define _NGX_HTTP_SECURE_TOKEN_MPD_H_INCLUDED_

// includes
#include <ngx_core.h>
#include "ngx_http_secure_token_filter_module.h"

// constants
#define MPD_MAX_TAG_NAME_LEN (50)
#define MPD_MAX_ATTR_NAME_LEN (50)

// typedefs
typedef struct {
	int state;
	u_char last_url_char;
	size_t tag_name_len;
	u_char tag_name[MPD_MAX_TAG_NAME_LEN];
	size_t attr_name_len;
	u_char attr_name[MPD_MAX_ATTR_NAME_LEN];
} ngx_http_secure_token_mpd_ctx_t;

// functions
ngx_chain_t**
ngx_http_secure_token_mpd_processor(
	processor_conf_t* conf,
	ngx_buf_t *in,
	ngx_http_secure_token_ctx_t* root_ctx,
	ngx_http_secure_token_mpd_ctx_t* ctx,
	ngx_pool_t* pool,
	ngx_chain_t** out);

#endif // _NGX_HTTP_SECURE_TOKEN_MPD_H_INCLUDED_
