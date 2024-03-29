/*
 * Copyright (c) 2007-2015, Anthony Minessale II
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * * Neither the name of the original author; nor the names of any contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 * 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _KS_Q_H_
#define _KS_Q_H_

#include "ks.h"

KS_BEGIN_EXTERN_C

KS_DECLARE(ks_status_t) ks_q_pop_timeout(ks_q_t *q, void **ptr, uint32_t timeout);
KS_DECLARE(ks_status_t) ks_q_wake(ks_q_t *q);
KS_DECLARE(ks_status_t) ks_q_flush(ks_q_t *q);
KS_DECLARE(ks_status_t) ks_q_set_flush_fn(ks_q_t *q, ks_flush_fn_t fn, void *flush_data);
KS_DECLARE(ks_status_t) ks_q_wait(ks_q_t *q);
KS_DECLARE(ks_size_t) ks_q_term(ks_q_t *q);
KS_DECLARE(ks_size_t) ks_q_size(ks_q_t *q);
KS_DECLARE(ks_status_t) ks_q_destroy(ks_q_t **qP);
KS_DECLARE(ks_status_t) ks_q_create(ks_q_t **qP, ks_pool_t *pool, ks_size_t maxlen);
KS_DECLARE(ks_status_t) ks_q_push(ks_q_t *q, void *ptr);
KS_DECLARE(ks_status_t) ks_q_trypush(ks_q_t *q, void *ptr);
KS_DECLARE(ks_status_t) ks_q_pop(ks_q_t *q, void **ptr);
KS_DECLARE(ks_status_t) ks_q_trypop(ks_q_t *q, void **ptr);

KS_END_EXTERN_C

#endif							/* defined(_KS_Q_H_) */

/* For Emacs:
 * Local Variables:
 * mode:c
 * indent-tabs-mode:t
 * tab-width:4
 * c-basic-offset:4
 * End:
 * For VIM:
 * vim:set softtabstop=4 shiftwidth=4 tabstop=4 noet:
 */
