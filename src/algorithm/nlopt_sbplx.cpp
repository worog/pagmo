/*****************************************************************************
 *   Copyright (C) 2004-2013 The PaGMO development team,                     *
 *   Advanced Concepts Team (ACT), European Space Agency (ESA)               *
 *   http://apps.sourceforge.net/mediawiki/pagmo                             *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Developers  *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Credits     *
 *   act@esa.int                                                             *
 *                                                                           *
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License, or       *
 *   (at your option) any later version.                                     *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************/

#include <nlopt.hpp>

#include "base_nlopt.h"
#include "nlopt_sbplx.h"

namespace pagmo { namespace algorithm {

/// Constructor.
/**
 * @see pagmo::algorithm::base_nlopt::base_nlopt()
 */
nlopt_sbplx::nlopt_sbplx(int max_iter, const double &ftol, const double &xtol):base_nlopt(nlopt::LN_SBPLX,false,false,max_iter,ftol,xtol) {}

base_ptr nlopt_sbplx::clone() const
{
	return base_ptr(new nlopt_sbplx(*this));
}

/// Algorithm name
std::string nlopt_sbplx::get_name() const
{
	return "Subplex (NLOPT)";
}

}}

BOOST_CLASS_EXPORT_IMPLEMENT(pagmo::algorithm::nlopt_sbplx)
