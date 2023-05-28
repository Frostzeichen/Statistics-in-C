# About Statistics in C

**Statistics in C** is a module for doing statistics work in C. It is designed to be used in low-level and edge-computed applications, written in a way that makes it easy for a user to edit when needed.

## Table of Contents
1. [**For the User**](##For-the-User)
2. [**Demo Information**](##Demo-Information)
3. [**Syntax**](##Syntax)
4. [**Checklist**](##Checklist)

## For the User
You can find all statistics formulas inside the `formulas` folder. Pick what you need since all formulas are meant to work independently from one another.

And if you think you need _everything_, the file `statistics_in_c.h` lets you take the all without needing to link (er, include?) every single one into your project. You'll only need to include that one file, and you can work with the functions as if they would if you copy-pasted each one.

Just make sure that `formulas` and `statistics_in_c.h` are both in the same folder level. Unless you want to change the folder for every single formula. You can use ChatGPT to help you out with that one.


Also, let me know at cruztjomar@gmail.com if there is any kind of statistical test you'd want to see added here. For now though, I'm only planning to go through my checklist first.

I'd be glad if you can donate to my PayPal too. It's the same email as my work email. That's gonna help a lot with development!

## Demo Information
Access the demo to have a taste of **Statistics in C** by going to my Replit repository:

https://replit.com/@Terenz-JomarJom/Statistics-in-C

Or if you want to compile this by yourself, all you need are these two files:

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