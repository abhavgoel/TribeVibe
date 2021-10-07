n = IO.gets("Enter a number: ") |> String.trim() |> String.to_integer()

cond do
  n > 0 ->
    fact_n = Enum.reduce(1..n, 1, &(&1 * &2))

    IO.puts("#{n}! is equal to #{fact_n}")

  n == 0 ->
    IO.puts("0! is equal to 1")

  n < 0 ->
    IO.puts("#{n}! does not exist!")
end
