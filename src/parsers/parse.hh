#pragma once

#include <iosfwd>
#include <memory>

#include "conf/configuration.hh"
#include "pn/net.hh"

namespace pnmc { namespace parsers {

/*------------------------------------------------------------------------------------------------*/

std::shared_ptr<pn::net>
parse(std::istream&);

/*------------------------------------------------------------------------------------------------*/

}} // namespace pnmc::parsers
