# libfoo - A C++ library

The `libfoo` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libfoo` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libfoo ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libfoo%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libfoo.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
