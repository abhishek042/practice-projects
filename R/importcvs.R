library(readr)
business_statistics <- read_csv("https://www.stats.govt.nz/assets/Uploads/Business-price-indexes/Business-price-indexes-June-2020-quarter/Download-data/business-price-indexes-june-2020-quarter-corrections-to-previously-published-statistics.csv")
cols(
    `Series reference` = col_character(),
    Period = col_double(),
    Description = col_character(),
    Revised = col_double(),
    `Initially published` = col_double()
  )

  View(business_statistics)
  head(business_statistics)
  tail(business_statistics)
  colnames(business_statistics)
  rownames(business_statistics)
  summary(business_statistics)
  
  install.packages("xlsx")
  library(readxl)
  XLFILE <- read_excel("D:/Downloads/XLFILE.xls")
  View(XLFILE)
  head(XLFILE)
  tail(XLFILE)
  colnames(XLFILE)
  rownames(XLFILE)
  summary(XLFILE)