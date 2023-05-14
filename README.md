# indic-perf


## Résultats obtenus pour le moment : 

```bash
jp@qinlens:~/Desktop/matrices$ ./bench_simple.sh 
Exécution 1 avec l'option de compilation -O0
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

    37 910 229 773      cycles                                                                  (83,31%)
   125 999 059 889      instructions                     #    3,32  insn per cycle              (83,31%)
     1 542 097 366      cache-references                                                        (83,33%)
        45 832 064      cache-misses                     #    2,972 % of all cache refs         (83,36%)
    13 007 915 322      branches                                                                (83,36%)
         1 249 513      branch-misses                    #    0,01% of all branches             (83,32%)

       9,086226243 seconds time elapsed

       9,079974000 seconds user
       0,003999000 seconds sys



real	0m9,125s
user	0m9,088s
sys	0m0,004s
Exécution 2 avec l'option de compilation -O0
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

    36 341 606 782      cycles                                                                  (83,31%)
   126 072 559 370      instructions                     #    3,47  insn per cycle              (83,31%)
     1 547 848 108      cache-references                                                        (83,35%)
        46 341 691      cache-misses                     #    2,994 % of all cache refs         (83,36%)
    13 020 828 262      branches                                                                (83,36%)
         1 306 558      branch-misses                    #    0,01% of all branches             (83,31%)

       8,652512259 seconds time elapsed

       8,640119000 seconds user
       0,011994000 seconds sys



real	0m8,662s
user	0m8,646s
sys	0m0,016s
Exécution 3 avec l'option de compilation -O0
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

    35 416 038 756      cycles                                                                  (83,34%)
   126 000 412 953      instructions                     #    3,56  insn per cycle              (83,34%)
     1 544 905 000      cache-references                                                        (83,34%)
        44 583 943      cache-misses                     #    2,886 % of all cache refs         (83,34%)
    13 007 154 110      branches                                                                (83,34%)
         1 279 284      branch-misses                    #    0,01% of all branches             (83,30%)

       8,595644822 seconds time elapsed

       8,587159000 seconds user
       0,007999000 seconds sys



real	0m8,604s
user	0m8,588s
sys	0m0,015s
Exécution 4 avec l'option de compilation -O0
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

    38 077 332 318      cycles                                                                  (83,31%)
   126 077 715 613      instructions                     #    3,31  insn per cycle              (83,31%)
     1 547 991 299      cache-references                                                        (83,33%)
        47 881 460      cache-misses                     #    3,093 % of all cache refs         (83,36%)
    13 017 951 232      branches                                                                (83,36%)
         1 285 007      branch-misses                    #    0,01% of all branches             (83,33%)

       9,205737689 seconds time elapsed

       9,201283000 seconds user
       0,004000000 seconds sys



real	0m9,214s
user	0m9,206s
sys	0m0,008s
Exécution 5 avec l'option de compilation -O0
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

    36 740 262 596      cycles                                                                  (83,32%)
   125 988 366 238      instructions                     #    3,43  insn per cycle              (83,31%)
     1 541 906 189      cache-references                                                        (83,32%)
        44 235 122      cache-misses                     #    2,869 % of all cache refs         (83,33%)
    13 009 870 806      branches                                                                (83,36%)
         1 328 649      branch-misses                    #    0,01% of all branches             (83,36%)

       8,727383899 seconds time elapsed

       8,718101000 seconds user
       0,008001000 seconds sys



real	0m8,736s
user	0m8,724s
sys	0m0,011s
Exécution 1 avec l'option de compilation -O1
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     7 489 325 981      cycles                                                                  (83,34%)
    14 029 885 794      instructions                     #    1,87  insn per cycle              (83,32%)
     1 673 460 041      cache-references                                                        (83,34%)
        21 885 410      cache-misses                     #    1,308 % of all cache refs         (83,32%)
     1 006 632 994      branches                                                                (83,34%)
         1 092 004      branch-misses                    #    0,11% of all branches             (83,33%)

       1,775926471 seconds time elapsed

       1,762874000 seconds user
       0,007994000 seconds sys



real	0m1,785s
user	0m1,769s
sys	0m0,012s
Exécution 2 avec l'option de compilation -O1
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     7 392 435 407      cycles                                                                  (83,27%)
    14 014 762 331      instructions                     #    1,90  insn per cycle              (83,27%)
     1 723 480 761      cache-references                                                        (83,28%)
        18 152 006      cache-misses                     #    1,053 % of all cache refs         (83,28%)
     1 004 740 057      branches                                                                (83,43%)
         1 093 469      branch-misses                    #    0,11% of all branches             (83,48%)

       1,746013811 seconds time elapsed

       1,745900000 seconds user
       0,000000000 seconds sys



real	0m1,756s
user	0m1,756s
sys	0m0,001s
Exécution 3 avec l'option de compilation -O1
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     7 349 561 472      cycles                                                                  (83,18%)
    14 055 386 476      instructions                     #    1,91  insn per cycle              (83,25%)
     1 711 119 621      cache-references                                                        (83,41%)
        19 594 459      cache-misses                     #    1,145 % of all cache refs         (83,42%)
     1 008 600 266      branches                                                                (83,41%)
         1 093 728      branch-misses                    #    0,11% of all branches             (83,32%)

       1,737154396 seconds time elapsed

       1,726258000 seconds user
       0,007991000 seconds sys



real	0m1,746s
user	0m1,734s
sys	0m0,009s
Exécution 4 avec l'option de compilation -O1
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     7 612 072 297      cycles                                                                  (83,19%)
    14 044 493 733      instructions                     #    1,85  insn per cycle              (83,22%)
     1 716 149 196      cache-references                                                        (83,41%)
        19 583 654      cache-misses                     #    1,141 % of all cache refs         (83,40%)
     1 007 712 829      branches                                                                (83,41%)
         1 093 008      branch-misses                    #    0,11% of all branches             (83,38%)

       1,807842670 seconds time elapsed

       1,802958000 seconds user
       0,003997000 seconds sys



real	0m1,816s
user	0m1,808s
sys	0m0,008s
Exécution 5 avec l'option de compilation -O1
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     7 725 768 833      cycles                                                                  (83,26%)
    14 020 365 556      instructions                     #    1,81  insn per cycle              (83,26%)
     1 697 491 896      cache-references                                                        (83,26%)
        20 839 253      cache-misses                     #    1,228 % of all cache refs         (83,26%)
     1 007 471 230      branches                                                                (83,47%)
         1 093 683      branch-misses                    #    0,11% of all branches             (83,48%)

       1,840478636 seconds time elapsed

       1,832443000 seconds user
       0,007984000 seconds sys



real	0m1,849s
user	0m1,841s
sys	0m0,008s
Exécution 1 avec l'option de compilation -O2
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 700 870 817      cycles                                                                  (83,10%)
     9 007 852 631      instructions                     #    2,43  insn per cycle              (83,10%)
     1 499 107 388      cache-references                                                        (83,35%)
        37 410 584      cache-misses                     #    2,496 % of all cache refs         (83,55%)
       999 930 253      branches                                                                (83,54%)
         1 046 797      branch-misses                    #    0,10% of all branches             (83,36%)

       0,899645232 seconds time elapsed

       0,895358000 seconds user
       0,003997000 seconds sys



real	0m0,908s
user	0m0,904s
sys	0m0,004s
Exécution 2 avec l'option de compilation -O2
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 605 138 724      cycles                                                                  (83,08%)
     9 019 695 564      instructions                     #    2,50  insn per cycle              (83,08%)
     1 484 033 742      cache-references                                                        (83,51%)
        37 248 532      cache-misses                     #    2,510 % of all cache refs         (83,53%)
     1 000 248 892      branches                                                                (83,54%)
         1 046 165      branch-misses                    #    0,10% of all branches             (83,26%)

       0,874809071 seconds time elapsed

       0,870720000 seconds user
       0,003994000 seconds sys



real	0m0,886s
user	0m0,875s
sys	0m0,011s
Exécution 3 avec l'option de compilation -O2
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 584 207 876      cycles                                                                  (83,27%)
     9 053 758 841      instructions                     #    2,53  insn per cycle              (83,28%)
     1 485 042 218      cache-references                                                        (83,27%)
        37 725 435      cache-misses                     #    2,540 % of all cache refs         (83,27%)
     1 006 646 177      branches                                                                (83,33%)
         1 044 843      branch-misses                    #    0,10% of all branches             (83,57%)

       0,861205903 seconds time elapsed

       0,857181000 seconds user
       0,004005000 seconds sys



real	0m0,871s
user	0m0,866s
sys	0m0,005s
Exécution 4 avec l'option de compilation -O2
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 632 775 054      cycles                                                                  (83,17%)
     9 017 894 074      instructions                     #    2,48  insn per cycle              (83,17%)
     1 489 599 119      cache-references                                                        (83,22%)
        36 691 745      cache-misses                     #    2,463 % of all cache refs         (83,62%)
     1 005 188 650      branches                                                                (83,62%)
         1 036 496      branch-misses                    #    0,10% of all branches             (83,20%)

       0,879601543 seconds time elapsed

       0,871569000 seconds user
       0,007996000 seconds sys



real	0m0,888s
user	0m0,873s
sys	0m0,015s
Exécution 5 avec l'option de compilation -O2
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 414 718 400      cycles                                                                  (83,34%)
     9 014 332 183      instructions                     #    2,64  insn per cycle              (83,34%)
     1 496 390 230      cache-references                                                        (83,34%)
        37 338 515      cache-misses                     #    2,495 % of all cache refs         (83,35%)
     1 004 307 043      branches                                                                (83,34%)
         1 033 507      branch-misses                    #    0,10% of all branches             (83,28%)

       0,816706231 seconds time elapsed

       0,812660000 seconds user
       0,004003000 seconds sys



real	0m0,826s
user	0m0,818s
sys	0m0,008s
Exécution 1 avec l'option de compilation -O3
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 553 918 859      cycles                                                                  (83,28%)
     9 071 584 658      instructions                     #    2,55  insn per cycle              (83,28%)
     1 494 921 452      cache-references                                                        (83,28%)
        37 374 643      cache-misses                     #    2,500 % of all cache refs         (83,29%)
     1 005 212 048      branches                                                                (83,37%)
         1 044 127      branch-misses                    #    0,10% of all branches             (83,49%)

       0,861679167 seconds time elapsed

       0,857602000 seconds user
       0,004007000 seconds sys



real	0m0,870s
user	0m0,858s
sys	0m0,012s
Exécution 2 avec l'option de compilation -O3
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 515 294 949      cycles                                                                  (83,37%)
     9 063 266 745      instructions                     #    2,58  insn per cycle              (83,35%)
     1 485 934 321      cache-references                                                        (83,37%)
        37 565 341      cache-misses                     #    2,528 % of all cache refs         (83,35%)
     1 006 233 356      branches                                                                (83,37%)
         1 054 499      branch-misses                    #    0,10% of all branches             (83,19%)

       0,841679761 seconds time elapsed

       0,840449000 seconds user
       0,000000000 seconds sys



real	0m0,853s
user	0m0,842s
sys	0m0,010s
Exécution 3 avec l'option de compilation -O3
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 372 929 923      cycles                                                                  (83,34%)
     9 011 633 289      instructions                     #    2,67  insn per cycle              (83,35%)
     1 489 769 647      cache-references                                                        (83,34%)
        36 574 477      cache-misses                     #    2,455 % of all cache refs         (83,34%)
     1 005 080 305      branches                                                                (83,34%)
         1 027 889      branch-misses                    #    0,10% of all branches             (83,29%)

       0,816729735 seconds time elapsed

       0,812532000 seconds user
       0,004002000 seconds sys



real	0m0,825s
user	0m0,821s
sys	0m0,004s
Exécution 4 avec l'option de compilation -O3
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 520 780 869      cycles                                                                  (83,10%)
     9 022 345 390      instructions                     #    2,56  insn per cycle              (83,10%)
     1 490 135 066      cache-references                                                        (83,29%)
        36 073 278      cache-misses                     #    2,421 % of all cache refs         (83,57%)
     1 009 581 621      branches                                                                (83,57%)
         1 040 514      branch-misses                    #    0,10% of all branches             (83,37%)

       0,852391221 seconds time elapsed

       0,848364000 seconds user
       0,004001000 seconds sys



real	0m0,861s
user	0m0,856s
sys	0m0,005s
Exécution 5 avec l'option de compilation -O3
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 513 833 927      cycles                                                                  (83,06%)
     9 051 335 380      instructions                     #    2,58  insn per cycle              (83,06%)
     1 490 603 401      cache-references                                                        (83,39%)
        36 616 677      cache-misses                     #    2,457 % of all cache refs         (83,53%)
     1 006 101 633      branches                                                                (83,53%)
         1 044 150      branch-misses                    #    0,10% of all branches             (83,44%)

       0,850083858 seconds time elapsed

       0,846024000 seconds user
       0,003990000 seconds sys



real	0m0,859s
user	0m0,854s
sys	0m0,004s
Exécution 1 avec l'option de compilation -Ofast
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 465 929 387      cycles                                                                  (83,20%)
     8 984 289 901      instructions                     #    2,59  insn per cycle              (83,20%)
     1 506 828 545      cache-references                                                        (83,20%)
        36 658 344      cache-misses                     #    2,433 % of all cache refs         (83,44%)
       999 063 608      branches                                                                (83,68%)
         1 032 847      branch-misses                    #    0,10% of all branches             (83,28%)

       0,833628610 seconds time elapsed

       0,829633000 seconds user
       0,004007000 seconds sys



real	0m0,842s
user	0m0,831s
sys	0m0,011s
Exécution 2 avec l'option de compilation -Ofast
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 490 086 997      cycles                                                                  (83,13%)
     9 026 028 517      instructions                     #    2,59  insn per cycle              (83,13%)
     1 491 798 862      cache-references                                                        (83,13%)
        36 662 225      cache-misses                     #    2,458 % of all cache refs         (83,51%)
     1 006 735 584      branches                                                                (83,61%)
         1 045 829      branch-misses                    #    0,10% of all branches             (83,49%)

       0,830139176 seconds time elapsed

       0,822132000 seconds user
       0,007981000 seconds sys



real	0m0,839s
user	0m0,823s
sys	0m0,016s
Exécution 3 avec l'option de compilation -Ofast
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 565 781 172      cycles                                                                  (83,10%)
     9 037 747 872      instructions                     #    2,53  insn per cycle              (83,43%)
     1 487 661 281      cache-references                                                        (83,43%)
        36 352 181      cache-misses                     #    2,444 % of all cache refs         (83,43%)
     1 005 684 338      branches                                                                (83,43%)
         1 045 623      branch-misses                    #    0,10% of all branches             (83,19%)

       0,845079495 seconds time elapsed

       0,840996000 seconds user
       0,004004000 seconds sys



real	0m0,854s
user	0m0,842s
sys	0m0,013s
Exécution 4 avec l'option de compilation -Ofast
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 489 184 217      cycles                                                                  (83,28%)
     9 073 125 618      instructions                     #    2,60  insn per cycle              (82,79%)
     1 488 686 876      cache-references                                                        (83,28%)
        36 222 418      cache-misses                     #    2,433 % of all cache refs         (83,22%)
     1 008 161 320      branches                                                                (83,75%)
         1 081 653      branch-misses                    #    0,11% of all branches             (83,68%)

       0,836160226 seconds time elapsed

       0,821716000 seconds user
       0,003950000 seconds sys



real	0m0,845s
user	0m0,828s
sys	0m0,006s
Exécution 5 avec l'option de compilation -Ofast
Première valeur de la matrice résultante: 2000

 Performance counter stats for './matrices':

     3 462 835 692      cycles                                                                  (83,18%)
     9 007 616 870      instructions                     #    2,60  insn per cycle              (83,21%)
     1 490 481 779      cache-references                                                        (83,18%)
        37 039 382      cache-misses                     #    2,485 % of all cache refs         (83,44%)
     1 007 008 477      branches                                                                (83,66%)
         1 065 083      branch-misses                    #    0,11% of all branches             (83,32%)

       0,833469699 seconds time elapsed

       0,825567000 seconds user
       0,004007000 seconds sys



real	0m0,846s
user	0m0,835s
sys	0m0,008s
```