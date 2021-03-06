/*
       FLCT Local Correlation Tracking software
       http://cgem.ssl.berkeley.edu/~fisher/public/software/FLCT
       Copyright (C) 2007-2019, Regents of the University of California

       This software is based on the concepts described in Welsch & Fisher
       (2008, PASP Conf. Series 383, 373), with updates described in
       Fisher et al. 2019, "The PDFI_SS Electric Field Inversion Software",
       in prep.
       If you use the software in a scientific
       publication, the authors would appreciate a citation to these papers
       and any future papers describing updates to the methods.

       This is free software; you can redistribute it and/or
       modify it under the terms of the GNU Lesser General Public
       License version 2.1 as published by the Free Software Foundation.

       This software is distributed in the hope that it will be useful,
       but WITHOUT ANY WARRANTY; without even the implied warranty of
       MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
       See the GNU Lesser General Public License for more details.

       To view the GNU Lesser General Public License visit
       http://www.gnu.org/copyleft/lesser.html
       or write to the Free Software Foundation, Inc.,
       59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
# include "flctsubs.h"

i4 read3images (char *fname, i4 * nx, i4 * ny, double **arr, double **barr,
	     double **carr, i4 transp);
