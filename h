
[1mFrom:[0m /home/taillet/nyc-pigeon-organizer-dc-web-career-010719/nyc_pigeon_organizer.rb @ line 20 Object#nyc_pigeon_organizer:

     [1;34m3[0m: [32mdef[0m [1;34mnyc_pigeon_organizer[0m(data)
     [1;34m4[0m:   [1;34m# write your code here![0m
     [1;34m5[0m: new_hash = {}
     [1;34m6[0m: data.each [32mdo[0m |attribute, list|
     [1;34m7[0m:   list.each [32mdo[0m |option, names|
     [1;34m8[0m:     names.each [32mdo[0m |name|
     [1;34m9[0m:       check = new_hash[name]
    [1;34m10[0m:       [32mif[0m check == [1;36mnil[0m
    [1;34m11[0m:         new_hash[name]= {attribute => [option.to_s]}
    [1;34m12[0m:       [32melsif[0m check != [1;36mnil[0m
    [1;34m13[0m:         [32mif[0m check.keys[[1;34m0[0m] == attribute
    [1;34m14[0m:           check.values[[1;34m0[0m] << option.to_s
    [1;34m15[0m:         [32melsif[0m check.keys[[1;34m0[0m] != attribute
    [1;34m16[0m:         array = []
    [1;34m17[0m:         array << check
    [1;34m18[0m:         array << {attribute => [option.to_s]}
    [1;34m19[0m:         new_hash[name] = array.flatten([1;34m1[0m)
 => [1;34m20[0m:         binding.pry
    [1;34m21[0m: 
    [1;34m22[0m:       [32mend[0m
    [1;34m23[0m:       [32mend[0m
    [1;34m24[0m:     [32mend[0m
    [1;34m25[0m:   [32mend[0m
    [1;34m26[0m: [32mend[0m
    [1;34m27[0m: new_hash
    [1;34m28[0m: [32mend[0m

