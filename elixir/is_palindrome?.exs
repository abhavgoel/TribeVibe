string = IO.gets("Enter a word: ") |> String.trim()

str_len = String.length(string)
last_ind = str_len - 1

is_plaindrome? =
  String.split(string, "", trim: true)
  |> Enum.reduce_while(0, fn
    c, i ->
      oposite_c = String.at(string, last_ind - i)

      cond do
        i == last_ind - i -> {:halt, true}
        oposite_c != c -> {:halt, false}
        oposite_c == c -> {:cont, i + 1}
      end
  end)

if is_plaindrome? do
  "#{string} is a palimdrome!"
else
  "#{string} is not a palimdrome..."
end
|> IO.puts()
