.PHONY: clean All

All:
	@echo "----------Building project:[ CSES_PROBLEM_SET_Weird_Algorithm - Debug ]----------"
	@cd "CSES_PROBLEM_SET_Weird_Algorithm" && "$(MAKE)" -f  "CSES_PROBLEM_SET_Weird_Algorithm.mk"
clean:
	@echo "----------Cleaning project:[ CSES_PROBLEM_SET_Weird_Algorithm - Debug ]----------"
	@cd "CSES_PROBLEM_SET_Weird_Algorithm" && "$(MAKE)" -f  "CSES_PROBLEM_SET_Weird_Algorithm.mk" clean
