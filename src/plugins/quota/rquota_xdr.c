#include "lib.h"
#include <rpc/rpc.h>
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "../../../src/plugins/quota/rquota.h"

bool_t
xdr_sq_dqblk (XDR *xdrs, sq_dqblk *objp)
{
	register int32_t *buf ATTR_UNUSED;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 8 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
				 return FALSE;
		} else {
			(void)IXDR_PUT_U_LONG(buf, objp->rq_bhardlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_bsoftlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_curblocks);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_fhardlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_fsoftlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_curfiles);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_btimeleft);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_ftimeleft);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 8 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
				 return FALSE;
		} else {
			objp->rq_bhardlimit = IXDR_GET_U_LONG(buf);
			objp->rq_bsoftlimit = IXDR_GET_U_LONG(buf);
			objp->rq_curblocks = IXDR_GET_U_LONG(buf);
			objp->rq_fhardlimit = IXDR_GET_U_LONG(buf);
			objp->rq_fsoftlimit = IXDR_GET_U_LONG(buf);
			objp->rq_curfiles = IXDR_GET_U_LONG(buf);
			objp->rq_btimeleft = IXDR_GET_U_LONG(buf);
			objp->rq_ftimeleft = IXDR_GET_U_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_getquota_args (XDR *xdrs, getquota_args *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_string (xdrs, &objp->gqa_pathp, RQ_PATHLEN))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->gqa_uid))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_setquota_args (XDR *xdrs, setquota_args *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_int (xdrs, &objp->sqa_qcmd))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->sqa_pathp, RQ_PATHLEN))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sqa_id))
		 return FALSE;
	 if (!xdr_sq_dqblk (xdrs, &objp->sqa_dqblk))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ext_getquota_args (XDR *xdrs, ext_getquota_args *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_string (xdrs, &objp->gqa_pathp, RQ_PATHLEN))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->gqa_type))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->gqa_id))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ext_setquota_args (XDR *xdrs, ext_setquota_args *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_int (xdrs, &objp->sqa_qcmd))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->sqa_pathp, RQ_PATHLEN))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sqa_id))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->sqa_type))
		 return FALSE;
	 if (!xdr_sq_dqblk (xdrs, &objp->sqa_dqblk))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rquota (XDR *xdrs, rquota *objp)
{
	register int32_t *buf ATTR_UNUSED;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 10 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->rq_bsize))
				 return FALSE;
			 if (!xdr_bool (xdrs, &objp->rq_active))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
				 return FALSE;
		} else {
			(void)IXDR_PUT_LONG(buf, objp->rq_bsize);
			(void)IXDR_PUT_BOOL(buf, objp->rq_active);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_bhardlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_bsoftlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_curblocks);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_fhardlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_fsoftlimit);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_curfiles);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_btimeleft);
			(void)IXDR_PUT_U_LONG(buf, objp->rq_ftimeleft);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 10 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->rq_bsize))
				 return FALSE;
			 if (!xdr_bool (xdrs, &objp->rq_active))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
				 return FALSE;
		} else {
			objp->rq_bsize = IXDR_GET_LONG(buf);
			objp->rq_active = IXDR_GET_BOOL(buf);
			objp->rq_bhardlimit = IXDR_GET_U_LONG(buf);
			objp->rq_bsoftlimit = IXDR_GET_U_LONG(buf);
			objp->rq_curblocks = IXDR_GET_U_LONG(buf);
			objp->rq_fhardlimit = IXDR_GET_U_LONG(buf);
			objp->rq_fsoftlimit = IXDR_GET_U_LONG(buf);
			objp->rq_curfiles = IXDR_GET_U_LONG(buf);
			objp->rq_btimeleft = IXDR_GET_U_LONG(buf);
			objp->rq_ftimeleft = IXDR_GET_U_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->rq_bsize))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->rq_active))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_bhardlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_bsoftlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_curblocks))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_fhardlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_fsoftlimit))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_curfiles))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_btimeleft))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rq_ftimeleft))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_qr_status (XDR *xdrs, qr_status *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_getquota_rslt (XDR *xdrs, getquota_rslt *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_qr_status (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case Q_OK:
		 if (!xdr_rquota (xdrs, &objp->getquota_rslt_u.gqr_rquota))
			 return FALSE;
		break;
	case Q_NOQUOTA:
		break;
	case Q_EPERM:
		break;
	default:
		return FALSE;
	}
	return TRUE;
}

bool_t
xdr_setquota_rslt (XDR *xdrs, setquota_rslt *objp)
{
	register int32_t *buf ATTR_UNUSED;

	 if (!xdr_qr_status (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case Q_OK:
		 if (!xdr_rquota (xdrs, &objp->setquota_rslt_u.sqr_rquota))
			 return FALSE;
		break;
	case Q_NOQUOTA:
		break;
	case Q_EPERM:
		break;
	default:
		return FALSE;
	}
	return TRUE;
}