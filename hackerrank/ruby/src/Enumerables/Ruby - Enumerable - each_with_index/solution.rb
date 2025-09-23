def skip_animals(animals, skip)
  array = []

  animals.each_with_index { |animal, index| array.push("#{index}:#{animal}") unless index < skip}

  array
end
