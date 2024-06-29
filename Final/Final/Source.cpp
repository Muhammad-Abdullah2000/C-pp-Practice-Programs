#include <iostream>
#include <string>
using namespace std;
int main() {
    string text = "switch(reportType){case FEATURE_WITH_DEPT -> {   List<DeptWithApp> departments = getDepartmentWithAppList(judgeTaskRepository.getDeptWithApp());departments.forEach(dto -> { departments.forEach(dto -> {  for (FeatureAnalyzeDTO dto1 : featureAnalyzeDTOList) {    if (dto.getApplicationName().equals(dto1.getAppName())) {     getCountInAMonth(featureAnalyzeDTOList, totalCountMapByMonth, countInAMonth, dto, 1);  }} });";
    string txt1 = "switch";
    for (int f1 = text.find("switch"); f1 != string::npos; f1 = text.find(txt1, f1 + 1)) {
        cout << f1 << endl;
    }
    string txt2 = "case";
    for (int f2 = text.find("case"); f2 != string::npos; f2 = text.find(txt2, f2 + 1)) {
        cout << f2 << endl;
    }
    string txt3 = "if";
    for (int f3 = text.find("if"); f3 != string::npos; f3 = text.find(txt3, f3 + 1)) {
        cout << f3 << endl;
    }
  
}


// switch (reportType) {
//    case FEATURE_WITH_DEPT -> {
 //       List<DeptWithApp> departments = getDepartmentWithAppList(judgeTaskRepository.getDeptWithApp());
   //     departments.forEach(dto -> {
   //         for (FeatureAnalyzeDTO dto1 : featureAnalyzeDTOList) {
   //             if (dto.getApplicationName().equals(dto1.getAppName())) {
    //              getCountInAMonth(featureAnalyzeDTOList, totalCountMapByMonth, countInAMonth, dto, 1);
     //           }
  //          }
  //      });
   //     totalCountMapByMonth.keySet().forEach(s -> {
   //         String[] split = s.split(",");
   ///         String department = split[0];
   //         String month = split[1];
    ///        Set<String> keySet = finalMap.keySet();
    //        boolean isMonthPresent = getFeatureStatus(keySet, month);
    //        if (!isMonthPresent) {
    //            finalMap.put(department + "," + month, totalCountMapByMonth.get(s));
   //         }
   //     });
   //     log.info("totalCountMapByDept {}", totalCountMapByMonth);
   //     log.info("finalMap {}", finalMap);
    //    List<FeatureAnalyzeWithDeptDTO> dtoResultListWithDept = new ArrayList<>();
    //    finalMap.forEach((key, value) -> {
    //        String[] keySplit = key.split(",");
    //        String departmentName = keySplit[0];
   //         String month = keySplit[1];
   //         dtoResultListWithDept.add(new FeatureAnalyzeWithDeptDTO(departmentName, month, ((double)value * 100) / countOfAllFeatures));
  //      });
  //      log.info("dtoResultListWithDept {}", dtoResultListWithDept);
   //     return getFeatureAnalyzeWithDeptDTOS(dtoResultListWithDept);
  //  }
 //   case FEATURE_WITHOUT_DEPT -> {
   //     Comparator<FeatureAnalyzeDTO> comp = (o1, o2)->Month.valueOf(o2.getMonth().toUpperCase()).getValue() - Month.valueOf(o1.getMonth().toUpperCase()).getValue();
     //   featureAnalyzeDTOList.sort(comp);
   ///     log.info("featureAnalyzeDTOList --> {}", featureAnalyzeDTOList);
   //     getCountInAMonth(featureAnalyzeDTOList, totalCountMapByMonth, countInAMonth, null, 2);
   //     totalCountMapByMonth.keySet().forEach(s -> {
   //         String[] split = s.split(",");
    //        String month = split[0];
     //       Set<String> keySet = finalMap.keySet();
     //       boolean isMonthPresent = getFeatureStatus(keySet, month);
     //       if (!isMonthPresent) {
     //           finalMap.put(month, totalCountMapByMonth.get(s));

        //    }}); }default -> throw new IllegalStateException("Unexpected value: " + reportType);
//}