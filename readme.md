# About Statistics in C

**Statistics in C** is a library for doing statistics work in C. It is designed to be used in low-level and edge-computed applications, written in a way that makes it easy for a user to edit each formula when needed.

## For the User
You can find all statistics formulas inside the `formulas` folder. Pick what you need since all formulas are meant to work independently from one another.

And if you think you need _everything_, the file `statistics_in_c.h` lets you take them all without needing to `#include` every single one into your project. You'll only need to include that one file, and you can work with the functions as if you would if you copy-pasted each one.

Just make sure that `formulas` and `statistics_in_c.h` are both in the same folder level. Unless you want to change the folder for every single formula. You can use ChatGPT to help you out with that one.

## Demo Information
The `main.c` file contains a demo that lets you access each equation. It acts as a demo for the whole project.

## Syntax
You can find everything inside the [syntax.md](syntax.md) file.

## Checklist
- [x] 0. Fundamental mathematical operations
- [x] 1. Mean
- [x] 2. Variance
- [x] 3. Standard deviation
- [x] 4. Coefficient of variation
- [x] 5. Skewness
- [ ] 6. Kurtosis
- [ ] 7. Covariance
- [ ] 8. Correlation
- [ ] 9. Simple linear regression
- [ ] 10. Multiple linear regression
- [ ] 11. Analysis of variance (ANOVA)
- [ ] 12. Chi-squared test
- [ ] 13. t-test
- [ ] 14. F-test
- [ ] 15. Non-parametric tests (e.g. Mann-Whitney U test, Wilcoxon signed-rank test)

Original by Terenz Jomar Dela Cruz
