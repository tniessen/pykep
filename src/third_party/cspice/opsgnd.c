/* opsgnd.f -- translated by f2c (version 19980913).
   You must link the resulting object file with the libraries:
	-lf2c -lm   (in that order)
*/

#include "f2c.h"

/* $Procedure            OPSGND ( Opposite Sign Double Precision Numbers ) */
logical opsgnd_(doublereal *x, doublereal *y)
{
    /* System generated locals */
    logical ret_val;

/* $ Abstract */

/*      Function: true if the input arguments have opposite signs. */

/* $ Disclaimer */

/*     THIS SOFTWARE AND ANY RELATED MATERIALS WERE CREATED BY THE */
/*     CALIFORNIA INSTITUTE OF TECHNOLOGY (CALTECH) UNDER A U.S. */
/*     GOVERNMENT CONTRACT WITH THE NATIONAL AERONAUTICS AND SPACE */
/*     ADMINISTRATION (NASA). THE SOFTWARE IS TECHNOLOGY AND SOFTWARE */
/*     PUBLICLY AVAILABLE UNDER U.S. EXPORT LAWS AND IS PROVIDED "AS-IS" */
/*     TO THE RECIPIENT WITHOUT WARRANTY OF ANY KIND, INCLUDING ANY */
/*     WARRANTIES OF PERFORMANCE OR MERCHANTABILITY OR FITNESS FOR A */
/*     PARTICULAR USE OR PURPOSE (AS SET FORTH IN UNITED STATES UCC */
/*     SECTIONS 2312-2313) OR FOR ANY PURPOSE WHATSOEVER, FOR THE */
/*     SOFTWARE AND RELATED MATERIALS, HOWEVER USED. */

/*     IN NO EVENT SHALL CALTECH, ITS JET PROPULSION LABORATORY, OR NASA */
/*     BE LIABLE FOR ANY DAMAGES AND/OR COSTS, INCLUDING, BUT NOT */
/*     LIMITED TO, INCIDENTAL OR CONSEQUENTIAL DAMAGES OF ANY KIND, */
/*     INCLUDING ECONOMIC DAMAGE OR INJURY TO PROPERTY AND LOST PROFITS, */
/*     REGARDLESS OF WHETHER CALTECH, JPL, OR NASA BE ADVISED, HAVE */
/*     REASON TO KNOW, OR, IN FACT, SHALL KNOW OF THE POSSIBILITY. */

/*     RECIPIENT BEARS ALL RISK RELATING TO QUALITY AND PERFORMANCE OF */
/*     THE SOFTWARE AND ANY RELATED MATERIALS, AND AGREES TO INDEMNIFY */
/*     CALTECH AND NASA FOR ALL THIRD-PARTY CLAIMS RESULTING FROM THE */
/*     ACTIONS OF RECIPIENT IN THE USE OF THE SOFTWARE. */

/* $ Required_Reading */

/*     None. */

/* $ Keywords */

/*      NUMBERS */

/* $ Declarations */
/* $ Brief_I/O */

/*      VARIABLE  I/O  DESCRIPTION */
/*      --------  ---  -------------------------------------------------- */
/*      X          I   A double precision number */
/*      Y          I   A double precision number */

/* $ Detailed_Input */

/*      X      is any double precision number. */

/*      Y      is any double precision number. */

/* $ Detailed_Output */

/*      OPSGND is returned as .TRUE. if one of the pair X,Y is positive */
/*             and the other is negative. */

/* $ Parameters */

/*     None. */

/* $ Particulars */

/*      This routine returns the value: */

/*            (      (( X .GT. 0) .AND. (Y .LT. 0)) */
/*              .OR. (( X .LT. 0) .AND. (Y .GT. 0)) ) */

/*      This is a more stable value than */

/*            ( X*Y .LT. 0 ) */

/*      Note that if either of the two values is zero, OPSGND will be */
/*      false. */

/* $ Examples */

/*      This routine can be used whenever a decision depends upon two */
/*      Double Precision values having opposite signs. */

/*      IF ( OPSGND ( F(X1), F(X2) ) ) THEN */
/*            . */
/*            . */
/*         find a root of F lying between X1 and X2 */
/*            . */
/*            . */
/*      ELSE */
/*            . */
/*            . */
/*         do something */
/*            . */
/*            . */
/*      END IF */

/* $ Restrictions */

/*      None. */

/* $ Exceptions */

/*      Error free. */

/* $ Files */

/*      None. */

/* $ Author_and_Institution */

/*      W.L. Taber      (JPL) */

/* $ Literature_References */

/*      None. */

/* $ Version */

/* -     SPICELIB Version 1.0.1, 10-MAR-1992 (WLT) */

/*         Comment section for permuted index source lines was added */
/*         following the header. */

/* -     SPICELIB Version 1.0.0, 31-JAN-1990 (WLT) */

/* -& */
/* $ Index_Entries */

/*     opposite sign d.p. numbers */

/* -& */
    ret_val = *x > 0. && *y < 0. || *x < 0. && *y > 0.;
    return ret_val;
} /* opsgnd_ */
