open Tajm_Iana_Tz.Lazy;
let data = [|
{name:"Canada/Atlantic", raw:"Canada/Atlantic|LMT ADT AST AWT APT|-15264:0 -10800:1 -14400:2 -10800:3 -10800:4|0212121212121212121212121212121212121212121212121234212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212|-CAAAAAAAAAA= -fw5UYA== -ZRshQA== -ZCns0A== -YUd6oA== -YEUisA== -XWLowA== -XM9O0A== -W4WpwA== -WuTg0A== -WaxfQA== -WQOtUA== -V8NCwA== -VyPLUA== -VeNgwA== -VTLF0A== -VAN+wA== -U0Bu0A== -UhEnwA== -UXMB0A== -UEO6wA== -T4Cq0A== -TlFjwA== -TbSPUA== -THGBwA== -S9tE0A== -SpGfwA== -Seo/UA== -SLG9wA== -R/foUA== -RtsWQA== -RhgGUA== -RPs0QA== -RC7p0A== -Qv+iwA== -QmLOUA== -QQ1LwA== -QG8l0A== -PywYQA== -PqG40A== -PXJxwA== -PK9h0A== -O5KPwA== -Os9/0A== -OY3DwA== -OO+d0A== -N8mRQA== -NwaBUA== -NemvQA== -NSafUA== -NHcdoA== -LdwLkA== -LZ8SMA== -LIopIA== -K78wMA== -KqpHIA== -Kd9OMA== -KMplIA== -J/9sMA== -JuqDIA== -Jh+KMA== -IyGEoA== -IlaLsA== -IUGioA== -IHapsA== -H2HAoA== -HpbHsA== -HYHeoA== -HLblsA== -GbjgIA== -GO3nMA== -F9j+IA== -Fw4FMA== -FfkcIA== -FS4jMA== -FBk6IA== -E05BMA== -DnBZoA== -DYB2sA== -DJB3oA== -C6CUsA== -CrCVoA== -CcCysA== -CNCzoA== -B9eWMA== -BvDRoA== -Bfe0MA== -BQe1IA== -BBfSMA== -AyfTIA== -AjfwMA== -AUfxIA== -WA4w l/Dg AYfT0A== AnfS4A== A3DwUA== BGDvYA== BVDSUA== BkDRYA== BzC0UA== CCCzYA== CRCWUA== CgCVYA== CvB4UA== C+B3YA== DNmU0A== DcBZYA== Drl20A== D6l14A== EJlY0A== EYlX4A== Enk60A== E2k54A== FFkc0A== FUkb4A== Fjj+0A== Fyj94A== GCIbUA== GQjf4A== GgH9UA== GvH8YA== G+HfUA== HNHeYA== HcHBUA== HrHAYA== H6GjUA== IHXy4A== IYGFUA== IlXU4A== I2qh0A== JDW24A== JUqD0A== JhWY4A== Jypl0A== J/61YA== KQpH0A== Kd6XYA== Kuop0A== K755YA== LNNGUA== LZ5bYA== LrMoUA== L349YA== MJMKUA== MWdZ4A== MnLsUA== M0c74A== NFLOUA== NScd4A== NjKwUA== Nwb/4A== OBvM0A== OObh4A== Ofuu0A== OsbD4A== O9uQ0A== PK/gYA== Pbty0A== Po/CYA== P5tU0A== QG+kYA== QYRxUA== Qk+GYA== Q2RTUA== RC9oYA== RUQ1UA== RfOa4A== Ry1R0A== R9N84A== SQ0z0A== SbNe4A== Su0V0A== S5x7YA== TNYyUA== TXxdYA== TrYUUA== T1w/YA== UJX2UA== UTwhYA== UnXYUA== UxwDYA== VFW6UA== VPvlYA== VjWcUA== VuUB4A== WB640A== WMTj4A== Wf6a0A== WqTF4A== W9580A== XISn4A== Xb5e0A== XmSJ4A== X55A0A== YE2mYA== YYddUA== Yi2IYA== Y2c/UA== ZA1qYA== ZUchUA== Ze1MYA== ZycDUA== Z80uYA== aQblUA== aa0QYA== aubHUA== a5Ys4A== bM/j0A== bXYO4A== bq/F0A== b1Xw4A== cI+n0A== cTXS4A== cm+J0A== cxW04A== dE9r0A== dP7RYA== djiIUA== dt6zYA== eBhqUA== eL6VYA== efhMUA== ep53YA== e9guUA== fH5ZYA== fbgQUA== fl47YA== f5fyUA=="},
{name:"Canada/Central", raw:"Canada/Central|LMT CDT CST CWT CPT|-23316:0 -18000:1 -21600:2 -18000:3 -18000:4 -18000:1 -21600:2|02121212342121212121212121212121212121212125656565656565656565656565656565656565656565656565656565656565656565656565656565621212121212121212121212121212121212121212121212121212121212121212|-CAAAAAAAAAA= -mxtPbA== -ZP4EIA== -ZDxFsA== -YUdegA== -YEUGkA== -PV/EgA== -PLB7EA== -NHcBgA== -LdwLkA== -LZ72EA== -LHeYAA== -K6yfEA== -KqorAA== -Kd8yEA== -KMpJAA== -J/9QEA== -JupnAA== -Jh9uEA== -JP/5AA== -JDejEA== -IyFogA== -IlZvkA== -IUGGgA== -IHaNkA== -H2GkgA== -HparkA== -HYHCgA== -HLbJkA== -G6HggA== -GtbnkA== -GbjEAA== -GO3LEA== -F9jiAA== -Fw3pEA== -FfkAAA== -FS4HEA== -FBkeAA== -Eyk7EA== -Ejk8AA== -EW5DEA== -DJBbgA== -C86dEA== -BvC1gA== -BfeKAA== -BQeZAA== -BBeoAA== -Aye3AA== -AjfGAA== -AUfVAA== -V+QA mA0A AYf+AA== AnfvAA== A3EagA== BGELgA== BVD8gA== BkDtgA== BzDegA== CCDPgA== CRDAgA== CgCxgA== CvCigA== C+CTgA== DNm/AA== DcB1gA== DrmhAA== D6mSAA== EJmDAA== EYl0AA== EnllAA== E2lWAA== FFlHAA== FUk4AA== FjkpAA== FykaAA== GCJFgA== GQj8AA== GgIngA== GvIYgA== G+IJgA== HNH6gA== HcHrgA== HrHcgA== H6HNgA== IHYPAA== IYGvgA== IlXxAA== I2rMAA== JDXTAA== JUquAA== JhW1AA== JyqQAA== J/7RgA== KQpyAA== Kd6zgA== KupUAA== K76VgA== LNNwgA== LZ53gA== LrNSgA== L35ZgA== MJM0gA== MWd2AA== MnMWgA== M0dYAA== NFL4gA== NSc6AA== NjLagA== NwccAA== OBv3AA== OOb+AA== OfvZAA== OsbgAA== O9u7AA== PK/8gA== PbudAA== Po/egA== P5t/AA== QG/AgA== QYSbgA== Qk+igA== Q2R9gA== Q7dv4A== RC+EgA== RURRcA== RfO3AA== Ry1t8A== R9OZAA== SQ1P8A== SbN7AA== Su0x8A== S5yXgA== TNZOcA== TXx5gA== TrYwcA== T1xbgA== UJYScA== UTw9gA== UnX0cA== UxwfgA== VFXWcA== VPwBgA== VjW4cA== VuUeAA== WB7U8A== WMUAAA== Wf628A== WqTiAA== W96Y8A== XITEAA== Xb568A== XmSmAA== X55c8A== YE3CgA== YYd5cA== Yi2kgA== Y2dbcA== ZA2GgA== ZUc9cA== Ze1ogA== ZycfcA== Z81KgA== aQcBcA== aa0sgA== aubjcA== a5ZJAA== bM//8A== bXYrAA== bq/h8A== b1YNAA== cI/D8A== cTXvAA== cm+l8A== cxXRAA== dE+H8A== dP7tgA== djikcA== dt7PgA== eBiGcA== eL6xgA== efhocA== ep6TgA== e9hKcA== fH51gA== fbgscA== fl5XgA== f5gOcA=="},
{name:"Canada/Eastern", raw:"Canada/Eastern|LMT EDT EST EWT EPT|-19052:0 -14400:1 -18000:2 -14400:3 -14400:4|021212121212121212121212121212121212121212121213421212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212|-CAAAAAAAAAA= -jRGHFA== -YUdskA== -YEUUoA== -X3jROA== -XmVOwA== -XWv5EA== -XKpWwA== -W3miEA== -WteHoA== -WZnAEA== -WPOxIA== -V7neEA== -VxPPIA== -VeM2kA== -VSqyoA== -VANUkA== -U0rQoA== -UiNykA== -UWruoA== -UEOQkA== -T4HSIA== -TmOukA== -TZi1oA== -TIPMkA== -S7jToA== -SqPqkA== -SdjxoA== -SMQIkA== -R/kPoA== -RtrsEA== -RhktoA== -RPsKEA== -RDARIA== -QxsoEA== -QlAvIA== -QTtGEA== -QHBNIA== -P1tkEA== -PpBrIA== -PXuCEA== -PLCJIA== -O5ugEA== -OtCnIA== -ObKDkA== -OPDFIA== -N9KhkA== -NHcPkA== -LdwLkA== -LZ8EIA== -LIobEA== -K78iIA== -KqpVMA== -Kd9cQA== -KMpzMA== -J/96QA== -JuqRMA== -JcyJwA== -JQFYkA== -I+yLoA== -IyF2kA== -IlZ9oA== -IUGUkA== -IHaboA== -H2GykA== -Hpa5oA== -HYHQkA== -HLbXoA== -G6HukA== -Gtb1oA== -GbjSEA== -GO3ZIA== -F9jwEA== -FukNIA== -FfkOEA== -FQkrIA== -FBksEA== -EylJIA== -EjlKEA== -EUAsoA== -EFAtkA== -D2BKoA== -DnBLkA== -DYBooA== -DJBpkA== -C6CGoA== -CrCHkA== -CcCkoA== -CNClkA== -B9eIIA== -BvDDkA== -BfemIA== -BQenEA== -BBfEIA== -AyfFEA== -AjfiIA== -AUfjEA== -WAAg l/7w AYfh4A== Anfg8A== A3D+YA== BGD9cA== BVDgYA== BkDfcA== BzDCYA== CCDBcA== CRCkYA== CgCjcA== CvCGYA== C+CFcA== DNmi4A== DcBncA== DrmE4A== D6mD8A== EJlm4A== EYll8A== EnlI4A== E2lH8A== FFkq4A== FUkp8A== FjkM4A== FykL8A== GCIpYA== GQjt8A== GgILYA== GvIKcA== G+HtYA== HNHscA== HcHPYA== HrHOcA== H6GxYA== IHYA8A== IYGTYA== IlXi8A== I2qv4A== JDXE8A== JUqR4A== JhWm8A== Jypz4A== J/7DcA== KQpV4A== Kd6lcA== Kuo34A== K76HcA== LNNUYA== LZ5pcA== LrM2YA== L35LcA== MJMYYA== MWdn8A== MnL6YA== M0dJ8A== NFLcYA== NScr8A== NjK+YA== NwcN8A== OBva4A== OObv8A== Ofu84A== OsbR8A== O9ue4A== PK/ucA== PbuA4A== Po/QcA== P5ti4A== QG+ycA== QYR/YA== Qk+UcA== Q2RhYA== RC92cA== RURDYA== RfOo8A== Ry1f4A== R9OK8A== SQ1B4A== SbNs8A== Su0j4A== S5yJcA== TNZAYA== TXxrcA== TrYiYA== T1xNcA== UJYEYA== UTwvcA== UnXmYA== UxwRcA== VFXIYA== VPvzcA== VjWqYA== VuUP8A== WB7G4A== WMTx8A== Wf6o4A== WqTT8A== W96K4A== XIS18A== Xb5s4A== XmSX8A== X55O4A== YE20cA== YYdrYA== Yi2WcA== Y2dNYA== ZA14cA== ZUcvYA== Ze1acA== ZycRYA== Z808cA== aQbzYA== aa0ecA== aubVYA== a5Y68A== bM/x4A== bXYc8A== bq/T4A== b1X+8A== cI+14A== cTXg8A== cm+X4A== cxXC8A== dE954A== dP7fcA== djiWYA== dt7BcA== eBh4YA== eL6jcA== efhaYA== ep6FcA== e9g8YA== fH5ncA== fbgeYA== fl5JcA== f5gAYA=="},
{name:"Canada/Mountain", raw:"Canada/Mountain|LMT MDT MST MWT MPT|-27232:0 -21600:1 -25200:2 -21600:3 -21600:4|0212121212121234212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212|-CAAAAAAAAAA= -dyExIA== -YUdQcA== -YET4gA== -X2ducA== -Xy16gA== -XXUXcA== -XHv6AA== -W5U1cA== -Wso8gA== -WawY8A== -WOpagA== -V8w28A== -VwE+AA== -NHbzcA== -LdwLkA== -LZ7oAA== -Kqoc8A== -Kd8kAA== BGEZkA== BVD8gA== BkD7kA== BzDegA== CCDdkA== CRDAgA== CgC/kA== CvCigA== C+ChkA== DNm/AA== DcCDkA== DrmhAA== D6mgEA== EJmDAA== EYmCEA== EnllAA== E2lkEA== FFlHAA== FUlGEA== FjkpAA== FykoEA== GCJFgA== GQkKEA== GgIngA== GvImkA== G+IJgA== HNIIkA== HcHrgA== HrHqkA== H6HNgA== IHYdEA== IYGvgA== IlX/EA== I2rMAA== JDXhEA== JUquAA== JhXDEA== JyqQAA== J/7fkA== KQpyAA== Kd7BkA== KupUAA== K76jkA== LNNwgA== LZ6FkA== LrNSgA== L35nkA== MJM0gA== MWeEEA== MnMWgA== M0dmEA== NFL4gA== NSdIEA== NjLagA== NwcqEA== OBv3AA== OOcMEA== OfvZAA== OsbuEA== O9u7AA== PLAKkA== PbudAA== Po/skA== P5t/AA== QG/OkA== QYSbgA== Qk+wkA== Q2R9gA== RC+SkA== RURfgA== RfPFEA== Ry18AA== R9OnEA== SQ1eAA== SbOJEA== Su1AAA== S5ylkA== TNZcgA== TXyHkA== TrY+gA== T1xpkA== UJYggA== UTxLkA== UnYCgA== UxwtkA== VFXkgA== VPwPkA== VjXGgA== VuUsEA== WB7jAA== WMUOEA== Wf7FAA== WqTwEA== W96nAA== XITSEA== Xb6JAA== XmS0EA== X55rAA== YE3QkA== YYeHgA== Yi2ykA== Y2dpgA== ZA2UkA== ZUdLgA== Ze12kA== ZyctgA== Z81YkA== aQcPgA== aa06kA== aubxgA== a5ZXEA== bNAOAA== bXY5EA== bq/wAA== b1YbEA== cI/SAA== cTX9EA== cm+0AA== cxXfEA== dE+WAA== dP77kA== djiygA== dt7dkA== eBiUgA== eL6/kA== efh2gA== ep6hkA== e9hYgA== fH6DkA== fbg6gA== fl5lkA== f5gcgA=="},
{name:"Canada/Newfoundland", raw:"Canada/Newfoundland|LMT NDT NST NPT NWT NDDT|-12652:0 -9052:1 -12652:2 -9000:1 -12600:2 -9000:3 -9000:4 -5400:5 -9000:1|021212121212121212121212121212121212124343434343434346543434343434343434343434343434343434343434343434343434343434343434343434343434343434347434343434343434343434343434343434343434343434343434343434343434343434343434343434343434343434343434|-CAAAAAAAAAA= -ocLLFA== -YzCd9A== -YlsZBA== -YUeBdA== -YEUphA== -X0l3JA== -XscAtA== -XWrmpA== -XHsDtA== -W4sEpA== -WpshtA== -WaHoJA== -WLs/tA== -V8IGJA== -VttdtA== -VeIkJA== -VPt7tA== -VAJCJA== -UxuZtA== -UiJgJA== -UTJ9NA== -UEJ+JA== -T1KbNA== -TllhpA== -TXK5NA== -THl/pA== -S5LXNA== -SpmdpA== -SbL1NA== -SLm7pA== -R9MTNA== -RtnZpA== -Ren2tA== -RPC9JA== -RAoUtA== -QxDbJA== -QioytA== -QWGylA== -QTD5WA== -QEpQ6A== -P0fOyA== -PoYQWA== -PWfsyA== -PKYuWA== -O4gKyA== -OsZMWA== -OZ7uSA== -OOZqWA== -N78MSA== -Nv1N2A== -Nd8qSA== -NR1r2A== -M/9ISA== -LdwLkA== -LZ8ZOA== -LHe7KA== -K7X8uA== -KpfZKA== -KdYauA== -KLf3KA== -J/Y4uA== -JtgVKA== -JhZWuA== -JO74qA== -JC06OA== -IyGLqA== -IlaSuA== -IUGpqA== -IHawuA== -H2HHqA== -HpbOuA== -HYHlqA== -HLbsuA== -G6IDqA== -GtcKuA== -GbjnKA== -GO3uOA== -F9kFKA== -Fw4MOA== -FfkjKA== -FS4qOA== -FBlBKA== -E05IOA== -EjlfKA== -EUBBuA== -EFBCqA== -D2BfuA== -DnBgqA== -DYB9uA== -DJB+qA== -C6CbuA== -CrCcqA== -CcC5uA== -CNC6qA== -B9edOA== -BvDYqA== -Bfe7OA== -BQe8KA== -BBfZOA== -AyfaKA== -Ajf3OA== -AUf4KA== -WBU4 l+nY AYfMyA== AnfL2A== A3DpSA== BGDoWA== BVDLSA== BkDKWA== BzCtSA== CCCsWA== CRCPSA== CgCOWA== CvBxSA== C+BwWA== DNmNyA== DcBSWA== DrlvyA== D6lu2A== EJlRyA== EYlQ2A== EnkzyA== E2ky2A== FFkVyA== FUkU2A== Fjj3yA== Fyj22A== GCIUSA== GQjY2A== GgH2SA== GvH1WA== G+HYSA== HNHXWA== HcG6SA== HrG5WA== H6GcSA== IHXP9A== IYFiZA== IlWx9A== I2pw1A== JDWT9A== JUpg5A== JhV19A== JypC5A== J/6SdA== KQok5A== Kd50dA== KuoG5A== K75WdA== LNMjZA== LZ44dA== LrMFZA== L34adA== MJLnZA== MWc29A== MnLJZA== M0cY9A== NFKrZA== NSb69A== NjKNZA== Nwbc9A== OBup5A== OOa+9A== OfuL5A== Osag9A== O9tt5A== PK+9dA== PbtP5A== Po+fdA== P5sx5A== QG+BdA== QYROZA== Qk9jdA== Q2QwZA== RC9FdA== RUQSZA== RfN39A== Ry0u5A== R9NZ9A== SQ0Q5A== SbM79A== Suzy5A== S5xYdA== TNYPZA== TXw6dA== TrYNSA== T1w4WA== UJXvSA== UTwaWA== UnXRSA== Uxv8WA== VFWzSA== VPveWA== VjWVSA== VuT62A== WB6xyA== WMTc2A== Wf6TyA== WqS+2A== W951yA== XISg2A== Xb5XyA== XmSC2A== X545yA== YE2fWA== YYdWSA== Yi2BWA== Y2c4SA== ZA1jWA== ZUcaSA== Ze1FWA== Zyb8SA== Z80nWA== aQbeSA== aa0JWA== aubASA== a5Yl2A== bM/cyA== bXYH2A== bq++yA== b1Xp2A== cI+gyA== cTXL2A== cm+CyA== cxWt2A== dE9kyA== dP7KWA== djiBSA== dt6sWA== eBhjSA== eL6OWA== efhFSA== ep5wWA== e9gnSA== fH5SWA== fbgJSA== fl40WA== f5frSA=="},
{name:"Canada/Pacific", raw:"Canada/Pacific|LMT PDT PST PWT PPT|-29548:0 -25200:1 -28800:2 -25200:3 -25200:4|02123421212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212121212|-CAAAAAAAAAA= -ocKJFA== -YUdCYA== -YETqcA== -NHblYA== -LdwLkA== -LZ7Z8A== -LInw4A== -K7738A== -KqoO4A== -Kd8V8A== -KMos4A== -J/8z8A== -JupK4A== -Jh9R8A== -JQEuYA== -JD9v8A== -IyFMYA== -IlZTcA== -IUFqYA== -IHZxcA== -H2GIYA== -HpaPcA== -HYGmYA== -HLatcA== -G6HEYA== -GtbLcA== -Gbin4A== -GO2u8A== -F9jF4A== -Fw3M8A== -Ffjj4A== -FS3q8A== -FBkB4A== -E04I8A== -Ejkf4A== -EW4m8A== -EFADYA== -D45E8A== -DnAhYA== -DYA+cA== -DJA/YA== -C6BccA== -CrBdYA== -CcB6cA== -CNB7YA== -B9dd8A== -BvCZYA== -Bfd78A== -BQd84A== -BBeZ8A== -Ayea4A== -Aje38A== -AUe44A== -V9Xw mCkg AYgMEA== AngLIA== A3EokA== BGEnoA== BVEKkA== BkEJoA== BzDskA== CCDroA== CRDOkA== CgDNoA== CvCwkA== C+CvoA== DNnNEA== DcCRoA== DrmvEA== D6muIA== EJmREA== EYmQIA== EnlzEA== E2lyIA== FFlVEA== FUlUIA== Fjk3EA== Fyk2IA== GCJTkA== GQkYIA== GgI1kA== GvI0oA== G+IXkA== HNIWoA== HcH5kA== HrH4oA== H6HbkA== IHYrIA== IYG9kA== IlYNIA== I2raEA== JDXvIA== JUq8EA== JhXRIA== JyqeEA== J/7toA== KQqAEA== Kd7PoA== KupiEA== K76xoA== LNN+kA== LZ6ToA== LrNgkA== L351oA== MJNCkA== MWeSIA== MnMkkA== M0d0IA== NFMGkA== NSdWIA== NjLokA== Nwc4IA== OBwFEA== OOcaIA== OfvnEA== Osb8IA== O9vJEA== PLAYoA== PburEA== Po/6oA== P5uNEA== QG/coA== QYSpkA== Qk++oA== Q2SLkA== RC+goA== RURtkA== RfPTIA== Ry2KEA== R9O1IA== SQ1sEA== SbOXIA== Su1OEA== S5yzoA== TNZqkA== TXyVoA== TrZMkA== T1x3oA== UJYukA== UTxZoA== UnYQkA== Uxw7oA== VFXykA== VPwdoA== VjXUkA== VuU6IA== WB7xEA== WMUcIA== Wf7TEA== WqT+IA== W961EA== XITgIA== Xb6XEA== XmTCIA== X555EA== YE3eoA== YYeVkA== Yi3AoA== Y2d3kA== ZA2ioA== ZUdZkA== Ze2EoA== Zyc7kA== Z81moA== aQcdkA== aa1IoA== aub/kA== a5ZlIA== bNAcEA== bXZHIA== bq/+EA== b1YpIA== cI/gEA== cTYLIA== cm/CEA== cxXtIA== dE+kEA== dP8JoA== djjAkA== dt7roA== eBiikA== eL7NoA== efiEkA== ep6voA== e9hmkA== fH6RoA== fbhIkA== fl5zoA== f5gqkA=="},
{name:"Canada/Saskatchewan", raw:"Canada/Saskatchewan|LMT MDT MST MWT MPT CST|-25116:0 -21600:1 -25200:2 -21600:3 -21600:4 -21600:5|021212121212121212121212342121212121212121212121212125|-CAAAAAAAAAA= -eQJs5A== -YUdQcA== -YET4gA== -SpqwEA== -Sc+3IA== -SLrOEA== -R+/VIA== -RtrsEA== -Rg/zIA== -RPHPkA== -RDARIA== -QxHtkA== -Qkb0oA== -PY33EA== -PJ4UIA== -O64VEA== -OsdsoA== -Oc4zEA== -ON5QIA== -N+UWkA== -NvUzoA== -NgU0kA== -NRVRoA== -NHbzcA== -LdwLkA== -LZ7oAA== -LJxz8A== -K6yRAA== -Kqoc8A== -Kd8kAA== -KMo68A== -J/9CAA== -JupY8A== -Jh9gAA== -JQE8cA== -JD9+AA== -IyFacA== -IlZhgA== -IUF4cA== -IHZ/gA== -H2GWcA== -HpadgA== -HYG0cA== -HLa7gA== -G6HScA== -GtbZgA== -Gbi18A== -GO29AA== -F9jT8A== -Fw3bAA== -FBkP8A== -EyktAA== -Ejkt8A=="},
{name:"Canada/Yukon", raw:"Canada/Yukon|LMT YDT YST YWT YPT YDDT PST PDT MST|-32412:0 -28800:1 -32400:2 -28800:3 -28800:4 -25200:5 -28800:6 -25200:7 -25200:8|021212342526767676767676767676767676767676767676767676767676767676767676767676767676767676768|-CAAAAAAAAAA= -gnl1ZA== -YUc0UA== -YETcYA== -Xy/zUA== -Xl0tgA== -NHbXUA== -LdwLkA== -LZ7L4A== -CNCJcA== -B9dd8A== -BOKg8A== E2lyIA== FFlVEA== FUlUIA== Fjk3EA== Fyk2IA== GCJTkA== GQkYIA== GgI1kA== GvI0oA== G+IXkA== HNIWoA== HcH5kA== HrH4oA== H6HbkA== IHYrIA== IYG9kA== IlYNIA== I2raEA== JDXvIA== JUq8EA== JhXRIA== JyqeEA== J/7toA== KQqAEA== Kd7PoA== KupiEA== K76xoA== LNN+kA== LZ6ToA== LrNgkA== L351oA== MJNCkA== MWeSIA== MnMkkA== M0d0IA== NFMGkA== NSdWIA== NjLokA== Nwc4IA== OBwFEA== OOcaIA== OfvnEA== Osb8IA== O9vJEA== PLAYoA== PburEA== Po/6oA== P5uNEA== QG/coA== QYSpkA== Qk++oA== Q2SLkA== RC+goA== RURtkA== RfPTIA== Ry2KEA== R9O1IA== SQ1sEA== SbOXIA== Su1OEA== S5yzoA== TNZqkA== TXyVoA== TrZMkA== T1x3oA== UJYukA== UTxZoA== UnYQkA== Uxw7oA== VFXykA== VPwdoA== VjXUkA== VuU6IA== WB7xEA== WMUcIA== Wf7TEA== WqT+IA== W961EA== XITgIA== Xb6XEA== XmTCIA=="},
|];