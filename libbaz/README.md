# libbaz - A C++ library

The `libbaz` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libbaz` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libbaz ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libbaz%lib{<TARGET>}
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
[bool] config.libbaz.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
