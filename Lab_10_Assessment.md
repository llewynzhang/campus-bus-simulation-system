### Assessment for Lab 10

#### Total score: _100.0_ / _100_

Run on March 03, 15:18:59 PM.


### Necessary Files and Structure

+  _10_ / _10_ : Pass: Check that directory "labs" exists.

+  _10_ / _10_ : Pass: Check that directory "labs/lab10_advanced_git" exists.


### Git Usage

+  _10_ / _10_ : Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

		f664efc229e898adfd744cdb4dd1f7784e3aa37e	refs/heads/devel

		dbc7539ac7c7cce99c409ef7f3f86c2c79b75951	refs/heads/fix/01-compilation-errors

		e6c26bfd80f26d2c5994adc026d01fb9e7631335	refs/heads/master

		21ce9f4aed9ba2c73518f2f6c412b10c2266ea23	refs/heads/style/02-cpplint_errors



+  _10_ / _10_ : Pass: Checking for the correct number of branches

Sufficient branches found (found=2, required=2):

fix/01-compilation-errors

style/02-cpplint_errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history


		[Zixuan Zhang] 2020-02-28 Merge branch 'style/02-cpplint_errors' into devel 

		[Zixuan Zhang] 2020-02-28 style(src): style #2 Make code in src cpplint compliant 

		[Zixuan Zhang] 2020-02-28 (origin/style/02-cpplint_errors, style/02-cpplint_errors) Fix some style problems 

		[Zixuan Zhang] 2020-02-28 Merge branch 'fix/01-compilation-errors' into devel 

		[Zixuan Zhang] 2020-02-28 (origin/fix/01-compilation-errors, fix/01-compilation-errors) fix(files): fix #1 Solve linking errors - uncommment one include statement and some function definition to solve linking errors


		[Zixuan Zhang] 2020-02-25 Replace src 

		[Zixuan Zhang] 2020-02-25 Delete src directory 

		[Zixuan Zhang] 2020-02-25 Merge branch 'support-code' 

		[Zixuan Zhang] 2020-02-25 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream into support-code 

















		[Zixuan Zhang] 2020-02-24 Merge branch 'master' of github.umn.edu:umn-csci-3081-s20/repo-zhan7230 

		[Zixuan Zhang] 2020-02-24 Add lab09 deliverables 

		[Zixuan Zhang] 2020-02-24 Merge branch 'support-code' 

		[Zixuan Zhang] 2020-02-24 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream into support-code 






















































		[Zixuan Zhang] 2020-02-22 Merge branch 'master' of github.umn.edu:umn-csci-3081-s20/repo-zhan7230 

		[Zixuan Zhang] 2020-02-22 Add tests for leap year and epoch constructor 

















		[Zixuan Zhang] 2020-02-21 Merge branch 'master' of github.umn.edu:umn-csci-3081-s20/repo-zhan7230 

		[Zixuan Zhang] 2020-02-21 Add lab8 


























+  _5_ / _5_ : Pass: Check git commit history
Sufficient commits (found=18,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 2)

[CLOSED issue #2] :  style/02-cpplint_errors [enhancement]

[CLOSED issue #1] :  fix/01-compilation-errors [bug]





+  _10.0_ / _10_ : Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #2] :  style/02-cpplint_errors [enhancement]

[CLOSED issue #1] :  fix/01-compilation-errors [bug]

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+  _10_ / _10_ : Pass: Check that directory "project/src" exists.

+ Pass: Change into directory "project/src".

+  _5_ / _5_ : Pass: Check that file "makefile" exists.

+  _30_ / _30_ : Pass: Check that make compiles.



#### Total score: _100.0_ / _100_
