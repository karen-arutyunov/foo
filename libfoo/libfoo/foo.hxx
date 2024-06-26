#pragma once

#include <iosfwd>
#include <string>

#include <libfoo/export.hxx>

namespace foo
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBFOO_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
