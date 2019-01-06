require 'pry'

def nyc_pigeon_organizer(data)
  # write your code here!
new_hash = {}
data.each do |attribute, list|
  list.each do |option, names|
    names.each do |name|
      check = new_hash[name]
      if check == nil
        new_hash.store(name, attribute => option.to_s)
      elsif check != nil
        if check.keys[0] == attribute
          array = []
          array << check.values[0]
          array << option.to_s
          new_hash[name][attribute] = array
        elsif check.keys[0] != attribute
        array = []
        array << check
        array[0].merge({attribute => [option.to_s]})
        new_hash[name] = array.flatten
        binding.pry

      end

      end
    end
  end

end
new_hash
end
