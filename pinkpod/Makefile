PHONY: compile
compile:
	@qmk compile -kb $(kb)

PHONY: flash
flash: compile
	@qmk flash -kb $(kb)

PHONY: gmmk-pro.%
gmmk-pro.%:
	$(MAKE) $* kb=gmmk/pro/rev1/iso

PHONY: sonnet.%
sonnet.%:
	$(MAKE) $* kb=mode/m75s

PHONY: gingham.%
gingham.%:
	$(MAKE) $* kb=yiancardesigns/gingham

PHONY: loop.%
loop.%:
	$(MAKE) $* kb=mode/m80v2/m80v2s
