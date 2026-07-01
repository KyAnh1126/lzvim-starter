return {
  {
    "stevearc/conform.nvim",
    opts = {
      formatters_by_ft = {
        markdown = { "prettier" },
        c = { "clang-format" },
        cpp = { "clang-format" },
      },
    },
  },
}
