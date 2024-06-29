#include<iostream>
#include<String>
using namespace std;
int main() {
	string txt = " switch (reportType) { case FEATURE_WITH_DEPT -> { List<DeptWithApp> departments = getDepartmentWithAppList(judgeTaskRepository.getDeptWithApp()); departments.forEach(dto -> {for (FeatureAnalyzeDTO dto1 : featureAnalyzeDTOList) {if (dto.getApplicationName().equals(dto1.getAppName())) {getCountInAMonth(featureAnalyzeDTOList, totalCountMapByMonth, countInAMonth, dto, 1); }} });totalCountMapByMonth.keySet().forEach(s -> { String[] split = s.split(,);String department = split[0];String month = split[1];Set<String> keySet = finalMap.keySet();boolean isMonthPresent = getFeatureStatus(keySet, month);if (!isMonthPresent) {finalMap.put(department + , + month, totalCountMapByMonth.get(s));} });log.info(totalCountMapByDept {}, totalCountMapByMonth);log.info(finalMap {}, finalMap);List<FeatureAnalyzeWithDeptDTO> dtoResultListWithDept = new ArrayList<>();finalMap.forEach((key, value) -> {String[] keySplit = key.split(,);String departmentName = keySplit[0];String month = keySplit[1];dtoResultListWithDept.add(new FeatureAnalyzeWithDeptDTO(departmentName, month, ((double) value * 100) / countOfAllFeatures));});log.info(dtoResultListWithDept {}, dtoResultListWithDept);return getFeatureAnalyzeWithDeptDTOS(dtoResultListWithDept);}case FEATURE_WITHOUT_DEPT -> {Comparator<FeatureAnalyzeDTO> comp = (o1, o2) -> Month.valueOf(o2.getMonth().toUpperCase()).getValue() - Month.valueOf(o1.getMonth().toUpperCase()).getValue();featureAnalyzeDTOList.sort(comp);log.info(featureAnalyzeDTOList --> {}, featureAnalyzeDTOList);getCountInAMonth(featureAnalyzeDTOList, totalCountMapByMonth, countInAMonth, null, 2);totalCountMapByMonth.keySet().forEach(s -> {String[] split = s.split(),);String month = split[0];Set<String> keySet = finalMap.keySet(); boolean isMonthPresent = getFeatureStatus(keySet, month);if (!isMonthPresent) {finalMap.put(month, totalCountMapByMonth.get(s));}});}default -> throw new IllegalStateException(Unexpected value:  + reportType);} ";
	string pattern1 = "if";
	string pattern2 = "switch";
	int found1 = txt.find("if");
	while (found1 != string::npos) {
		cout << "found in " << found1 << " position" << endl;
		found1 = txt.find(pattern1, found1 + 1);
	}

	int found2 = txt.find("switch");
	while (found2 != string::npos) {
		cout << "found in " << found2 << " position" << endl;
		found2 = txt.find(pattern2, found2 + 1);
	}
	cout << "............................" << endl;
	cout << " word is " << pattern1 << endl;
	cout << " word is " << pattern2;

}