.PHONY: clean All

All:
	@echo "----------Building project:[ CSES_PROBLEM_SET_Creating_Strings - Release ]----------"
	@cd "CSES_PROBLEM_SET_Creating_Strings" && "$(MAKE)" -f  "CSES_PROBLEM_SET_Creating_Strings.mk"
clean:
	@echo "----------Cleaning project:[ CSES_PROBLEM_SET_Creating_Strings - Release ]----------"
	@cd "CSES_PROBLEM_SET_Creating_Strings" && "$(MAKE)" -f  "CSES_PROBLEM_SET_Creating_Strings.mk" clean
